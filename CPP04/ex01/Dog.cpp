/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:20:14 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/09 13:56:04 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->_type = "Dog";
	_brain = new Brain;
	std::cout << "The homunculus turn into Dog" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal()
{
	_type = copy._type;
	std::cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << std::endl;
}
// Operators
Dog & Dog::operator=(const Dog &assign)
{
	_type = assign._type;
	return *this;
}

// Dog::Dog(std::string name)
// {
// 	std::cout << "Assembling the Animal" << std::endl;
// }

Dog::~Dog(void) 
{
	std::cout << "The Dog degrades into a homunculus" << std::endl;
	delete _brain;
}
