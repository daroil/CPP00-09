//#include "BitcoinExchange.hpp"

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>

//struct DateComparator {
//    bool operator()(const std::string& date1, const std::string& date2) const {
//        return date1 < date2;
//    }
//};

std::map<std::string, double>    fillMapFromInput(std::string inputFile, char del)
{
    std::map<std::string, double> rates;
    std::ifstream	infile(inputFile);
    std::string line;
    int i = 0;
    while(std::getline(infile, line))
    {
        std::istringstream iss(line);
        std::string name;
        float rate;
        std::cout << std::fixed << std::setprecision(2);
        if(std::getline(iss, name, del) && (iss >> rate))
        {
//            std::cout << i << " name " << name << " rate " << rate << std::endl;
            i++;
            rates[name] = rate;
        }
//        else
//            std::cerr << "error" << std::endl;
    }
    return rates;
}


void    checkMapAgainstInput(std::string inputFile, std::map<std::string, double> rates)
{
    std::ifstream	infile(inputFile);
    std::string line;
//    (void)rates;
//    for (std::map<std::string, float>::iterator it = rates.begin(); it != rates.end(); ++it) {
//        std::cout << it->first << "," << it->second << std::endl;
//    }
    while(std::getline(infile, line))
    {
        std::istringstream iss(line);
        std::string name;
        double rate;
        std::cout << std::fixed << std::setprecision(2);
        if(std::getline(iss, name, '|') && iss >> rate)
        {
            name.erase(std::remove_if(name.begin(), name.end(), ::isspace), name.end());
            if (rate < 0)
                std::cerr << "Error: not a positive number"<< std::endl;
            else if(rate >= static_cast<double>(std::numeric_limits<int>::max()))
                std::cerr << "Error: too large a number"<< std::endl;
            else
            {
                if (rates[name])
                    std::cout << name << " => " << rate << " = " << rates[name] << std::endl;
                else
                {
                // Find the closest date that is smaller than the inputDate using lower_bound()
                    std::map<std::string, double>::iterator it = rates.lower_bound(name);

                    // Check if the iterator is not at the beginning of the map
                    if (it != rates.begin()) {
                        // Decrement the iterator to get the lower bound (closest smaller date)
                        --it;

                        // Now, 'it' points to the closest date that is smaller than the inputDate
    //                    std::cout << "Closest smaller date: " << it->first << ", Value: " << it->second << std::endl;
                        std::cout << name << " => " << rate << " = " << it->second * rate << std::endl;
                    } else {
                        // If the iterator is at the beginning, there is no smaller date in the map
                        std::cout << "No smaller date found in the map." << std::endl;
                    }
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
    std::map<std::string, double> rates = fillMapFromInput("data.csv", ',');
//    for (std::map<std::string, float`>::iterator it = rates.begin(); it != rates.end(); ++it) {
//        std::cout << it->first << "," << it->second << std::endl;
//    }`
//    (void)argv;
    checkMapAgainstInput(argv[1], rates);
//    std::map<std::string, float> input = fillMapFromInput(argv[1], '|');
//    for (std::map<std::string, float>::iterator it = input.begin(); it != input.end(); ++it) {
//        std::cout << it->first << "," << it->second << std::endl;
//    }



    return 0;
}