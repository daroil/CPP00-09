#include "RPN.hpp"

RPN::RPN(void)
{
//    this->rates = fillMapFromInput("data.csv", ',');
}

RPN::RPN(std::string name)
{
//    this->rates = fillMapFromInput(name, ',');
}

RPN::RPN(RPN const &RPN)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = RPN;
}

RPN &RPN::operator=( RPN const &copy) {
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

RPN::~RPN(void) {}
