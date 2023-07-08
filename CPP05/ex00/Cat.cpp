/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:20:11 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/09 13:11:00 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->_type = "Cat";
	std::cout << "The homunculus turn into cat" << std::endl;
}

Cat::Cat(const Cat &Cat)
{
    this->_type = Cat._type;
	std::cout << "Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
    this->_type = obj._type;
	std::cout << "Copy assignment operator called" << std::endl;
    return(*this);
}

void	Cat::makeSound(void) const
{
    std::cout << "Meow from child!" << std::endl;
}

Cat::~Cat(void) 
{
	std::cout << "The Cat degrades into a homunculus" << std::endl;
}
