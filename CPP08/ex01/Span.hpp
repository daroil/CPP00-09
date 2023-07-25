#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <numeric>

class Span
{
public:
    Span();
    ~Span();
    Span(unsigned int N);
    Span(Span const &copy);
    Span &operator=(Span const &copy);

    void    addNumber(int number);
    void    addNumberRange(int start, int end);
    int     shortestSpan(void);
    int     longestSpan(void);

    void    displaySpan(void);
private:
    unsigned int        _maxSize;
    std::vector<int>    myVector;
    unsigned int        _size;
};