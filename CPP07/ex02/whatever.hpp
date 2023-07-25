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

    ~Array(void) {delete [] array;};

    Array(unsigned int n) : array(new T[n]), _size(n) {
        for(unsigned int i = 0; i < n; i++){
            array[i] = T();
        }
    };


    Array(const Array& other) : array(new T[other._size]), _size(other._size) {
        std::cout << "copy constructor called "<< std::endl;
        for (unsigned int i = 0; i < _size; ++i) {
            array[i] = other.array[i];
        }
    }

    // Assignment operator
    Array& operator=(const Array& other) {
        std::cout << "Assignment operator called "<< std::endl;
        if (this == &other) {
            return *this; // Handling self-assignment
        }

        // Deallocate existing memory
        delete[] array;

        // Allocate new memory and copy elements
        _size = other._size;
        array = new T[_size];
        for (unsigned int i = 0; i < _size; ++i) {
            array[i] = other.array[i];
        }

        return *this;
    }

    unsigned int size(void) {
        if (_size)
            return _size;
        else
        {
            unsigned int i = 0;
            while(array[i])
                i++;
            return i;
        }
    }

    T& operator[](unsigned int index) {
        if (index >= _size) {
            std::cout << "index " << index << std::endl;
            std::cout << "size " << _size << std::endl;
            throw std::out_of_range("Index out of bounds");
        }
        return array[index];
    }

private:
    T *array;
    unsigned int _size;

};