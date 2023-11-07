#pragma once

#include <iostream>
#include <vector>
//#include <algorithm>
#include <stdexcept>

//template <typename T>
//int easyfind(T a, int b)
//{
//    for (unsigned long i = 0; i < a.size(); i++)
//    {
//        if (a[i] == b)
//            return i;
//    }
//    throw std::exception();
//}

template <typename T>
typename T::iterator easyfind(T& container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);

    if (it != container.end()) {
        return it;
    } else {
        throw std::runtime_error("Value not found in container");
    }
}