#include "Span.hpp"


Span::Span(void) : _maxSize(5), _size(0)
{
    std::cout << "The default constructor" << std::endl;
}

Span::Span(unsigned int N) : _maxSize(N), _size(0)
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
    this->_maxSize = copy._maxSize;
    this->myVector = copy.myVector;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

Span::~Span(void)
{
    std::cout << "destructor called" << std::endl;
}

void    Span::addNumber(int number) {
    if (_size + 1 > _maxSize)
        throw std::exception();
    _size++;
    myVector.push_back(number);
}

void    Span::displaySpan(void)
{
    for (unsigned int i = 0; i < _size; ++i)
        std::cout << myVector[i] << std::endl;
}

//int     Span::shortestSpan() {
//
//}
//
//int Span::longestSpan() {
//}