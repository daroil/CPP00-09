/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:50:54 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/07 16:57:44 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->_type = "Cat";
	std::cout << "The homunculus turn into Wrong cat" << std::endl;
}

WrongCat::~WrongCat(void) 
{
	std::cout << "The (Wrong) Cat degrades(Is he, though?) into a homunculus" << std::endl;
}
