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
    {
        std::cout << "max size reached" << std::endl;
        throw std::exception();
    }
    _size++;
    myVector.push_back(number);
}

void    Span::addNumberRange(int start, int end) {
    int diff;
    if (end > start)
        diff = end - start;
    else
        diff = start - end;
    if (diff > static_cast<int>(_maxSize - _size))
        throw std::exception();
    std::vector<int> numbers(diff + 1);
    std::iota(numbers.begin(), numbers.end(), start);
    myVector.insert(myVector.end(), numbers.begin(), numbers.end());
    _size += diff + 1;
}

void    Span::displaySpan(void)
{
    for (unsigned int i = 0; i < _size; ++i)
        std::cout << myVector[i] << std::endl;
}

int     Span::shortestSpan() {
    if(myVector.empty())
    {
        std::cout << "Vector is empty!" << std::endl;
        return 0;
    }
    int shortest_span = INT_MAX;
    std::vector<int> sortedArray = myVector;
    std::sort(sortedArray.begin(), sortedArray.end());
    for (size_t i = 0; i < sortedArray.size(); i++)
    {
        if (sortedArray[i + 1])
        {
            int diff = sortedArray[i + 1] - sortedArray[i];
            shortest_span = std::min(shortest_span, diff);
        }
    }
    return shortest_span;
}


int Span::longestSpan() {

    if(myVector.empty())
    {
        std::cout << "Vector is empty!" << std::endl;
        return 0;
    }
    std::vector<int>::iterator maxElementIt = std::max_element(myVector.begin(), myVector.end());
    std::vector<int>::iterator minElementIt = std::min_element(myVector.begin(), myVector.end());

    return *maxElementIt - *minElementIt;
}