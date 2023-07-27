//#include "BitcoinExchange.hpp"

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>

int main(int argc, char **argv)
{
    if(argc != 2){


        std::cerr << "Error, wrong input" << std::endl;
        return (1);
    }
    std::map<std::string, float> rates;
    std::ifstream	infile("data.csv");
    std::string line;
//    int i = 0;
    while(std::getline(infile, line))
    {
        std::istringstream iss(line);
        std::string name;
        float rate;
        std::cout << std::fixed << std::setprecision(2);
        if(std::getline(iss, name, ',') && (iss >> rate))
        {
//            std::cout << i << " name " << name << " rate " << rate << std::endl;
//            i++;
            rates[name] = rate;
        }
//        else
//            std::cerr << "error" << std::endl;
    }

    std::ifstream	input(argv[1]);



//    for (std::map<std::string, float>::iterator it = rates.begin(); it != rates.end(); ++it) {
//        std::cout << it->first << "," << it->second << std::endl;
//    }
    return 0;
}