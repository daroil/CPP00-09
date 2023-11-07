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
    this->_vector = copy._vector;
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
    _vector.push_back(number);
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
    _vector.insert(_vector.end(), numbers.begin(), numbers.end());
    _size += diff + 1;
}

int generateRandom() {
    return std::rand() % 100 + 1; // Adjust the range as needed
}

void    Span::addNumberRandRange(int amount) {
    if (amount > static_cast<int>(_maxSize - _size))
        throw std::exception();
    std::vector<int> numbers(amount);

    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(NULL)));

    // Use std::generate to fill the container with random values
    std::generate(numbers.begin(), numbers.end(), generateRandom); // Adjust the range as needed
    _vector.insert(_vector.end(), numbers.begin(), numbers.end());
    _size += amount;
}

void    Span::displaySpan(void)
{
    for (unsigned int i = 0; i < _size; ++i)
        std::cout << _vector[i] << std::endl;
}

int     Span::shortestSpan() {
    if(_vector.empty())
    {
        std::cout << "Vector is empty!" << std::endl;
        return 0;
    }
    if (_vector.size() == 1)
        return 0;
    int shortest_span = INT_MAX;
    int diff = 0;
    std::vector<int> sortedArray = _vector;
    std::sort(sortedArray.begin(), sortedArray.end());
    for (size_t i = 0; i < sortedArray.size(); i++)
//    for (std::vector<int>::iterator it = sortedArray.begin(); it != sortedArray.end(); ++it)
    {
        if (sortedArray[i+1])
        {
            diff = sortedArray[i+1] - sortedArray[i];
            shortest_span = std::min(shortest_span, diff);
        }
    }
    return shortest_span;
}

int Span::longestSpan() {

    if(_vector.empty())
    {
        std::cout << "Vector is empty!" << std::endl;
        return 0;
    }
    std::vector<int>::iterator maxElementIt = std::max_element(_vector.begin(), _vector.end());
    std::vector<int>::iterator minElementIt = std::min_element(_vector.begin(), _vector.end());

    return *maxElementIt - *minElementIt;
}