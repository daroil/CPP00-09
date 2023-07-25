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
    {
//        _char = value[0];
        return true;
    }
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
    std::size_t length = std::strlen(value);
    if (value[length - 1] == 'f' || value[length - 1] == 'F')
            value[length - 1] = '\0';
    char*	endptr;
    double f = std::strtod(value, &endptr);
//    std::cout << f << std::endl;
    if (*endptr == '\0'
        && (f >= -std::numeric_limits<float>::max()
            && f <= std::numeric_limits<float>::max()))
        return true;
    return false;
}

bool ScalarConverter::isDouble(char* value)
{
    char*	endptr;
    double	d = std::strtod(value, &endptr);
    if (*endptr == '\0'
        && ((d >= -std::numeric_limits<double>::max()
             && d <= std::numeric_limits<double>::max()) || (isinf(d) || isnan(d))))
        return true;
    return false;
}

size_t ScalarConverter::getType(char *value)
{
    if (isChar(value))
        return CHAR;
    else if (isInt(value))
        return INT;
    else if (isFloat(value))
        return FLOAT;
    else if (isDouble(value))
        return DOUBLE;
    else
        return ERROR;
}

void    ScalarConverter::printFromChar(char c)
{
    if (c >= std::numeric_limits<unsigned char>::min() // 0
        && c <= std::numeric_limits<char>::max()) // 127
        if (std::isprint(c))
            std::cout << "char:\t" << "'" << c << "'" << std::endl;
        else
            std::cout << "char:\tNon displayable" << std::endl;
    else
        std::cout << "char:\tImpossible"<< std::endl;
    std::cout << "int:\t" << static_cast<int>(c) << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "float:\t" << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double:\t" << static_cast<double>(c) << std::endl;
}

void ScalarConverter::printFromInt(char *value) {
    int i = std::atoi(value);
    if (i >= std::numeric_limits<unsigned char>::min()
        && i <= std::numeric_limits<char>::max())
        if (std::isprint(i))
            std::cout << "char:\t" << "'" << static_cast<char>(i) << "'" << std::endl;
        else
            std::cout << "char:\tNon displayable" << std::endl;
    else
        std::cout << "char:\tImpossible"<< std::endl;
    std::cout << "int:\t" << i << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "float:\t" << static_cast<float>(i) << "f" << std::endl;
    std::cout << "double:\t" << static_cast<double>(i) << std::endl;
}

void ScalarConverter::printFromFloat(char *value) {
    float f = std::strtof(value, NULL);
    if (f >= std::numeric_limits<unsigned char>::min()
        && f <= std::numeric_limits<char>::max())
        if (std::isprint(f))
            std::cout << "char:\t" << "'" << static_cast<char>(f) << "'" << std::endl;
        else
            std::cout << "char:\tNon displayable" << std::endl;
    else
        std::cout << "char:\tImpossible"<< std::endl;
    if (static_cast<int>(f) == std::numeric_limits<int>::min()
        || static_cast<int>(f) == std::numeric_limits<int>::max()
        || isinf(f) || isnan(f))
        std::cout << "int:\tImpossible" << std::endl;
    else
        std::cout << "int:\t" << static_cast<int>(f) << std::endl;
//    std::cout << "float:\t" << f << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "float:\t" << f << "f" << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "double:\t" << static_cast<double>(f) << std::endl;
}

void    ScalarConverter::printFromDouble(char *value) {
        double d = std::strtod(value, NULL);
        if (d >= std::numeric_limits<unsigned char>::min()
            && d <= std::numeric_limits<char>::max())
            if (std::isprint(d))
                std::cout << "char:\t" << "'" << static_cast<char>(d) << "'" << std::endl;
            else
                std::cout << "char:\tNon displayable" << std::endl;
        else
            std::cout << "char:\tImpossible"<< std::endl;
        if (static_cast<int>(d) == std::numeric_limits<int>::min()
            || static_cast<int>(d) == std::numeric_limits<int>::max()
            || isinf(d) || isnan(d))
            std::cout << "int:\tImpossible" << std::endl;
        else
            std::cout << "int:\t" << static_cast<int>(d) << std::endl;
        std::cout << std::fixed << std::setprecision(1) << "float:\t" << static_cast<float>(d) << "f" << std::endl;
        std::cout << "double:\t" << d << std::endl;

}

void    ScalarConverter::printError() {
        std::cout << "\033[1;91mMy dear, you need to think before you start the program!\033[0m" << std::endl;
        std::cout << "CHARS: 'c', 'a', etc." << std::endl;
        std::cout << "INTS: 0, -42, 42, etc." << std::endl;
        std::cout << "FLOATS: 0.0f, -4.2f, 4.2f, etc." << std::endl;
        std::cout << "DOUBLES: 0.0, -4.2, 4.2, etc." << std::endl;
}

void    ScalarConverter::convert(char *value) {
    size_t type = getType(value);
//    std::cout << "result " << type << std::endl;
    switch (type) {
        case CHAR:
            printFromChar(value[0]);
            break;
        case INT:
            printFromInt(value);
            break;
        case FLOAT:
            printFromFloat(value);
            break;
        case DOUBLE:
            printFromDouble(value);
            break;
        default:
            printError();
            break;
    }
}