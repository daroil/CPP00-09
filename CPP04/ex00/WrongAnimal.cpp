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
	std::cout << "The Animal is born without name or type, you created a random homunculus" << std::endl;
}

WrongAnimal::~WrongAnimal(void) 
{
	std::cout << "The Homunculus died" << std::endl;
}

void	WrongAnimal::makeSound(void)
{
	if (_type == "Dog")
		std::cout << "WrongBark!" << std::endl;
	else if (_type == "Cat")
		std::cout << "Meow, but it feels wrong!" << std::endl;
	else
		std::cout << "Random gibberish, but it feels wrong!" << std::endl;
}