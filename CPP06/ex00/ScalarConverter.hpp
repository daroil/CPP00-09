#pragma once

#include <iostream>
#include <iomanip> // std::fixed, std::setprecision()
#include <cstring>
#include <cstdlib> // std::strtol std::strtod
#include <cctype> // isprint()
#include <limits> // std::numeric_limits
#include <math.h> // isnan(), isinf()

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter const &ScalarConverter);
        ScalarConverter &operator=( ScalarConverter const &copy);

    
    public:
        ~ScalarConverter();
        static void convert(char *value);
};
