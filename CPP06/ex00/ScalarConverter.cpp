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

//void	ScalarConverter::convert( std::string	&input ) {
//
//    int	type;
//
//    char	_char;
//    int		_int;
//    float	_float;
//    double	_double;
//
//    type = defineType(input);
//    if (type == 10) {
//        std::cerr << "Invalid value" << std::endl;
//        return ;
//    }
//    switch(type){
//
//        case 0:
//            _char	= input.at(0);
//            _int	= static_cast<int>(_char);
//            _float	= static_cast<float>(_char);
//            _double	= static_cast<double>(_char);
//            break ;
//
//        case 1:
//            _float	= static_cast<float>(atof(input.c_str()));
//            _double	= static_cast<double>(_float);
//            _char	= static_cast<char>(_float);
//            _int	= static_cast<int>(_float);
//            break ;
//
//        case 3:
//            _int	= atoi(input.c_str());
//            _double	= static_cast<double>(_int);
//            _char	= static_cast<char>(_int);
//            _float	= static_cast<float>(_int);
//            break ;
//
//        case 2:
//            _double	= atof(input.c_str());
//            _char	= static_cast<char>(_double);
//            _int	= static_cast<int>(_double);
//            _float	= static_cast<float>(_double);
//            break ;
//    }
//    if (type > 3)
//        return ;
//    print(_char, _int, _float, _double, input);
//    return ;
//}

//void	print(char _char, int _int, double _double, float _float, std::string input) {
//
//    if (isnan(_double))
//        std::cout << "char: Impossible" << std::endl;
//    else if (_char < 32 || _char > 126)
//        std::cout << "char: Non displayable" << std::endl;
//    else
//        std::cout << "char: " << _char << std::endl;
//    if (isinf(_double) || isnan(_double))
//        std::cout << "int: Impossible" << std::endl;
//    else if (atof(input.c_str()) > std::numeric_limits<int>::max() \
//			|| atof(input.c_str()) < std::numeric_limits<int>::min())
//        std::cout << "int: Overflow" << std::endl;
//    else
//        std::cout << "int: " << _int << std::endl;
//    std::cout << std::fixed << std::setprecision(1) << "float: " << _float << "f" <<std::endl;
//    std::cout << std::fixed << std::setprecision(1) << "double: " << _double << std::endl;
//}

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

void    ScalarConverter::printRest(char *value) {
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
        std::cout << "\033[1;91mInvalid input\033[0m" << std::endl;
        std::cout << "Examples of char literals: 'c', 'a', etc." << std::endl;
        std::cout << "Examples of int literals: 0, -42, 42, etc." << std::endl;
        std::cout << "Examples of float literals: 0.0f, -4.2f, 4.2f, etc." << std::endl;
        std::cout << "Examples of double literals: 0.0, -4.2, 4.2, etc." << std::endl;
}

void    ScalarConverter::convert(char *value) {
    size_t type = getType(value);
    std::cout << "result " << type << std::endl;
    if (type < 4)
    {
        if(type == 0)
            printFromChar(value[0]);
        else
            printRest(value);
    }
    else
        printError();
}