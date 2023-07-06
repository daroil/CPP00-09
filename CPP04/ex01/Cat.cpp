/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:20:11 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/09 14:58:09 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Cat::Cat(void) : Animal()
// {
// 	this->_type = "Cat";
// 	_brain = new Brain;
// 	std::cout << "The homunculus turn into cat" << std::endl;
// }

// Cat::Cat(const Cat &copy) : Animal()
// {
// 	_type = copy._type;
// 	_brain = copy._brain;
// 	std::cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << std::endl;
// }
// // Operators
// Cat & Cat::operator=(const Cat &assign)
// {
// 	_type = assign._type;
// 	_brain = assign._brain;
// 	return *this;
// }

// // Cat::Cat(std::string name)
// // {
// // 	std::cout << "Assembling the Animal" << std::endl;
// // }

// Cat::~Cat(void) 
// {
// 	std::cout << "The Cat degrades into a homunculus" << std::endl;
// 	delete _brain;
// }

Cat::Cat(void) : Animal(), _brain(new Brain())
{
	this->_type = "Cat";
	for (int i = 0; i < 100; i++)
		_brain->ideas[i] = "Meow meow!";
	// _brain = new Brain;
	std::cout << "The homunculus turn into Cat" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(), _brain(new Brain())
{
	// *this->_brain = *copy->_brain;
	// _type = copy._type;
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

void	Cat::makeSound(void) const
{
    std::cout << "Meow from child!" << std::endl;
}
