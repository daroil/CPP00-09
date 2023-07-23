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
