#pragma once

#include <iostream>

template <typename T, typename Func>
void iter(T* arr, size_t length, Func function) {
    for (size_t i = 0; i < length; ++i) {
        function(arr[i]);
    }
}

template <typename T>
void printElement(T element) {
    std::cout << element << " ";
}

template <typename T>
class Array
{
public:
    Array(void) : array(new T()){};
//    ~Array(void);
    Array(unsigned int n) : array(new T[n]) {for(unsigned int i = 0; i < n; i++){array[i] = 0;}};
//    Array(Array const &Array);
//    Array &operator=(Array const &copy);
    T *array;
    unsigned int size(void) {
        unsigned int i = 0;
        while(array[i])
            i++;
        return i;
    }
private:
};