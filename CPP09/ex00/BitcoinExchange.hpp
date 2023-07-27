#pragma once

#include <map>

class Bitcoin
{
    private:
        std::map<std::string, float> rates;
        std::map<std::string, float> input;
    public:
        Bitcoin();
        ~Bitcoin();
        Bitcoin(const Bitcoin &copy);
        Bitcoin &operator=(Bitcoin const &copy);
};