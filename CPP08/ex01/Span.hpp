#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T& container, int value) {
    // Find the first occurrence of 'value' in the container
    typename T::iterator it = std::find(container.begin(), container.end(), value);

    // Check if the element was found
    if (it != container.end()) {
        return it;
    } else {
        throw std::runtime_error("Value not found in container");
    }
}

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

private:
    unsigned int _size;
    std::vector<int> myVector;

};