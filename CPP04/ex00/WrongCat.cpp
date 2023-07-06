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
    this->_type = "WrongCat";
    std::cout << "The homunculus turn into WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &WrongCat)
{
    this->_type = WrongCat._type;
    std::cout << "Copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    this->_type = obj._type;
    std::cout << "Copy assignment operator called" << std::endl;
    return(*this);
}

void	WrongCat::makeSound(void) const
{
    std::cout << "Wrong Meow from child!" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "The WrongCat degrades into a homunculus" << std::endl;
}
