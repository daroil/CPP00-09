#pragma once

#include <iostream>
#include <vector>
#include <stdexcept>

//template <typename T>
//T min(T a, T b)
//{
//    if (a > b)
//        return b;
//    else
//        return a;
//}
//
//template <typename T>
//T max(T a, T b)
//{
//    if (a > b)
//        return a;
//    else
//        return b;
//}

template <typename T>
int easyfind(T a, int b)
{
    for (unsigned long i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;
    }
    throw std::exception();
}

//template <typename T>
//typename T::iterator easyfind(T& container, int value) {
//    // Find the first occurrence of 'value' in the container
//    typename T::iterator it = std::find(container.begin(), container.end(), value);
//
//    // Check if the element was found
//    if (it != container.end()) {
//        return it;
//    } else {
//        throw std::runtime_error("Value not found in container");
//    }
//}