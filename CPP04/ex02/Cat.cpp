/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:20:11 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/11 12:45:59 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal(), _brain(new Brain())
{
	this->_type = "Cat";
	for (int i = 0; i < 100; i++)
		_brain->ideas[i] = "Meow meow!";
	std::cout << "The homunculus turn into Cat" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(), _brain(new Brain())
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << std::endl;
}
// Operators
Cat & Cat::operator=(const Cat &assign)
{
	_type = assign._type;
	*this->_brain = *assign._brain;
	return *this;
}

Cat::~Cat(void) 
{
	std::cout << "The Cat degrades into a homunculus" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound(void)
{
	
	std::cout << "Meow from child!" << std::endl;

}