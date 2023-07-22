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
        enum TYPE
        {
            CHAR, INT, FLOAT, DOUBLE, ERROR
        };
        ScalarConverter();
        ScalarConverter(ScalarConverter const &ScalarConverter);
        ScalarConverter &operator=( ScalarConverter const &copy);

        static size_t    getType(char *value);
        static bool    isChar(char *value);
        static bool    isInt(char *value);
        static bool    isFloat(char *value);
        static bool    isDouble(char *value);

        static void     printFromChar(char c);
        static void     printFromInt(char *value);
        static void     printFromFloat(char *value);
        static void     printFromDouble(char *value);
        static void     printError(void);
    public:
        ~ScalarConverter();
        static void convert(char *value);
};
