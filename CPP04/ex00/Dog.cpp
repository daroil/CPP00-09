/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:20:14 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/07 16:40:16 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    this->_type = "Dog";
    std::cout << "The homunculus turn into Dog" << std::endl;
}

Dog::Dog(const Dog &Dog)
{
    this->_type = Dog._type;
    std::cout << "Copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
    this->_type = obj._type;
    std::cout << "Copy assignment operator called" << std::endl;
    return(*this);
}

void	Dog::makeSound(void) const
{
    std::cout << "Bark from child!" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "The Dog degrades into a homunculus" << std::endl;
}
