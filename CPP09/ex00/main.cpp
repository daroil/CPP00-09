//#include "BitcoinExchange.hpp"

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>

std::map<std::string, float>    fillMapFromInput(std::string inputFile, char del)
{
    std::map<std::string, float> rates;
    std::ifstream	infile(inputFile);
    std::string line;
    while(std::getline(infile, line))
    {
        std::istringstream iss(line);
        std::string name;
        float rate;
        std::cout << std::fixed << std::setprecision(2);
        if(std::getline(iss, name, del) && (iss >> rate))
        {
//            std::cout << " name " << name << " rate " << rate << std::endl;
            rates[name] = rate;
        }
    }
    return rates;
}


void    checkMapAgainstInput(std::string inputFile, std::map<std::string, float> rates)
{
    std::ifstream	infile(inputFile);
    std::string line;

    while(std::getline(infile, line))
    {
        std::istringstream iss(line);
        std::string name;
        float rate;
        std::cout << std::fixed << std::setprecision(2);
        if(std::getline(iss, name, '|') && iss >> rate)
        {
            name.erase(std::remove_if(name.begin(), name.end(), ::isspace), name.end());
            if (rate < 0)
                std::cerr << "Error: not a positive number"<< std::endl;
            else if(rate >= static_cast<float>(std::numeric_limits<int>::max()))
                std::cerr << "Error: too large a number"<< std::endl;
            else
            {
                if (rates[name])
                    std::cout << name << " => " << rate << " = " << rates[name] << std::endl;
                else
                {
                // Find the closest date that is smaller than the inputDate using lower_bound()
                    std::map<std::string, float>::iterator it = rates.lower_bound(name);

                    // Check if the iterator is not at the beginning of the map
                    if (it != rates.begin())
                    {
                        // Decrement the iterator to get the lower bound (closest smaller date)
                        --it;

                        // Now, 'it' points to the closest date that is smaller than the inputDate
    //                    std::cout << "Closest smaller date: " << it->first << ", Value: " << it->second << std::endl;
                        std::cout << name << " => " << rate << " = " << it->second * rate << std::endl;
                    }
                    else
                        std::cout << "No smaller date found in the map." << std::endl;
                }
            }
        }
        else
            std::cerr << "Error: bad input => " << name << std::endl;
    }
}

int main(int argc, char **argv)
{
    if(argc != 2){


        std::cerr << "Error, wrong input" << std::endl;
        return (1);
    }
    std::map<std::string, float> rates = fillMapFromInput("data.csv", ',');
//    for (std::map<std::string, float`>::iterator it = rates.begin(); it != rates.end(); ++it) {
//        std::cout << it->first << "," << it->second << std::endl;
//    }`
//    (void)argv;
    checkMapAgainstInput(argv[1], rates);




    return 0;
}