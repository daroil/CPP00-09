/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:20:11 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/07 16:39:55 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->_type = "Cat";
	std::cout << "The homunculus turn into cat" << std::endl;
}

// Cat::Cat(std::string name)
// {
// 	std::cout << "Assembling the Animal" << std::endl;
// }

Cat::~Cat(void) 
{
	std::cout << "The Cat degrades into a homunculus" << std::endl;
}
