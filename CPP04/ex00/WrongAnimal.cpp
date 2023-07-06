/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:50:46 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/07 16:56:08 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "The WrongAnimal is born" << std::endl;
    _type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &WrongAnimal)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = WrongAnimal;
}

WrongAnimal &WrongAnimal::operator=( WrongAnimal const &copy) {
    this->_type = copy._type;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "The WrongAnimal died" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	if (_type == "Dog")
		std::cout << "WrongBark!" << std::endl;
	else if (_type == "Cat")
		std::cout << "Meow, but it feels wrong!" << std::endl;
	else
		std::cout << "Random gibberish, but it feels wrong!" << std::endl;
}