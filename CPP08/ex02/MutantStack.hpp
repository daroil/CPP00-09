#pragma once

#include <iostream>
#include <stack>
#include <list>
#include <algorithm>
#include <stdexcept>
#include <numeric>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator; //define a type alias for the iterator type of the container
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator; //define a type alias for the iterator type of the container
    typedef typename std::stack<T>::container_type::const_iterator const_iterator; //define a type alias for the const iterator type of the container
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator; //define a type alias for the const iterator type of the container

    MutantStack() {
//        std::cout << "MutantStack was created" << std::endl << std::endl;
    }

    MutantStack(const MutantStack &src) {
        *this = src;
    }

    ~MutantStack() {
//        std::cout << std::endl << "MutantStack was destroyed" << std::endl;
    }

    MutantStack	&operator=(const MutantStack &src) {
        if (this == &src)
            return (*this);
        this->c = src.c;
        return (*this);
    }

    iterator begin() {
        return (std::stack<T>::c.begin());
    }

    iterator end() {
        return (std::stack<T>::c.end());
    }

    const_iterator begin() const {
        return (std::stack<T>::c.begin());
    }

    const_iterator end() const{
        return (std::stack<T>::c.end());
    }

    reverse_iterator rbegin(){
        return (std::stack<T>::c.rbegin());
    }

    reverse_iterator rend(){
        return (std::stack<T>::c.rend());
    }

    const_reverse_iterator rbegin() const {
        return (std::stack<T>::c.rbegin());
    }

    const_reverse_iterator rend() const {
        return (std::stack<T>::c.rend());
    }

private:

};