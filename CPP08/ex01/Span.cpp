#include "Span.hpp"


Span::Span(void) : _size(5)
{
    std::cout << "The default constructor" << std::endl;
}

Span::Span(unsigned int N) : _size(N)
{
    std::cout << "N constructor called" << std::endl;
}

Span::Span(Span const &Span)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = Span;
}

Span &Span::operator=( Span const &copy) {
    this->_size = copy._size;
    this->myVector = copy.myVector;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

Span::~Span(void)
{
    std::cout << "destructor called" << std::endl;
}