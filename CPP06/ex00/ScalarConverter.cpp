#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
    std::cout << "The default ScalarConverter constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &ScalarConverter)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ScalarConverter;
}

ScalarConverter &ScalarConverter::operator=( ScalarConverter const &copy) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &copy)
        return (*this);
    return (*this);
}

ScalarConverter::~ScalarConverter(void)
{
    std::cout << "The destructor called" << std::endl;
}

bool ScalarConverter::isChar(char *value)
{
    if (!std::isdigit(value[0]) && std::strlen(value) == 1)
        return true;
    return false;
}

bool ScalarConverter::isInt(char *value)
{
    char    *endptr;
    double  num = std::strtod(value, &endptr);
    if (*endptr == '\0' && (num >= std::numeric_limits<int>::min() && num <= std::numeric_limits<int>::max()))
        return true;
    return false;
}

bool ScalarConverter::isFloat(char *value)
{
    if (isinf(std::strtod(value, NULL)) || isnan(std::strtod(value, NULL)))
        return true;
    return false;
}

int ScalarConverter::getType(char *value)
{
    if(isChar(value))
        return CHAR;
    else if(isInt(value))
        return INT;
    else if(isFloat(value))
        return FLOAT;
    else
        return ERROR;
}

void    ScalarConverter::convert(char *value) {
    std::cout << getType(value) << std::endl;


}