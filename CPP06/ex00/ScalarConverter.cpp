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
    return (*this);
}

ScalarConverter::~ScalarConverter(void)
{
    std::cout << "The destructor called" << std::endl;
}
