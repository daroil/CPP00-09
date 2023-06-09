/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:20:11 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/09 13:45:46 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->_type = "Cat";
	_brain = new Brain;
	std::cout << "The homunculus turn into cat" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal()
{
	_type = copy._type;
	std::cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << std::endl;
}
// Operators
Cat & Cat::operator=(const Cat &assign)
{
	_type = assign._type;
	return *this;
}

// Cat::Cat(std::string name)
// {
// 	std::cout << "Assembling the Animal" << std::endl;
// }

Cat::~Cat(void) 
{
	std::cout << "The Cat degrades into a homunculus" << std::endl;
	delete _brain;
}
