#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>

class Bitcoin
{
    private:
        std::map<std::string, float> rates;
    public:
        Bitcoin();
        ~Bitcoin();
        Bitcoin(std::string database);
        Bitcoin(const Bitcoin &copy);
        Bitcoin &operator=(Bitcoin const &copy);
        void    compareData(std::string inputFile);
        std::map<std::string, float>    fillMapFromInput(std::string inputFile, char del);
        void    checkMapAgainstInput(std::string inputFile);
        void    errorMessage(std::string message);
};