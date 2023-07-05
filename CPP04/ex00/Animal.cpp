/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:08:12 by dhendzel          #+#    #+#             */
/*   Updated: 2023/07/05 16:10:00 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) 
{
	std::cout << "The Animal is born without name or type, you created a random homunculus" << std::endl;
	_type = "animal";
}

Animal::Animal(Animal const &Animal)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = Animal;
}

Animal &Animal::operator=( Animal const &copy) {
	this->_type = copy._type;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Animal::~Animal(void) 
{
	std::cout << "The Homunculus died" << std::endl;
}

// virtual void	Animal::makeSound(void)
// {
// 	if (_type == "Dog")
// 		std::cout << "Bark!" << std::endl;
// 	else if (_type == "Cat")
// 		std::cout << "Meow!" << std::endl;
// 	else
// 		std::cout << "Random gibberish!" << std::endl;
// }