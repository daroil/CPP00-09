/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:20:14 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/09 14:58:32 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


void	Dog::displayIdea(int idx)
{
		std::cout << _brain->ideas[idx] << std::endl;
}

Dog::Dog(void) : Animal(), _brain(new Brain())
{
	this->_type = "Dog";
	for (int i = 0; i < 100; i++)
		_brain->ideas[i] = "Bark Bark!";
	// _brain = new Brain;
	std::cout << "The homunculus turn into Dog" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(), _brain(new Brain())
{
	// *this->_brain = *copy->_brain;
	// _type = copy._type;
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}
// Operators
Dog & Dog::operator=(const Dog &assign)
{
	std::cout << "\e[0;33mCopy assignment operator called of Dog\e[0m" << std::endl;
	_type = assign._type;
	*this->_brain = *assign._brain;
	return *this;
}

Dog::~Dog(void) 
{
	std::cout << "The Dog degrades into a homunculus" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound(void) const
{
    std::cout << "Bark from child!" << std::endl;
}
