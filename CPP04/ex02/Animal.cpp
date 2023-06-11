/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:08:12 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/09 13:32:11 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) 
{
	std::cout << "The Animal is born without name or type, you created a random homunculus" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	_type = copy._type;
	std::cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << std::endl;
}
// Operators
Animal & Animal::operator=(const Animal &assign)
{
	_type = assign._type;
	return *this;
}

Animal::~Animal(void) 
{
	std::cout << "The Homunculus died" << std::endl;
}

void	Animal::makeSound(void)
{
	if (_type == "Dog")
		std::cout << "Bark!" << std::endl;
	else if (_type == "Cat")
		std::cout << "Meow!" << std::endl;
	else
		std::cout << "Random gibberish!" << std::endl;
}