/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:33:50 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/20 15:31:46 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	// _type = type.substr(0, type.length());
	// _type = type;
	std::cout << "\e[0;33mFields Constructor called of Cure\e[0m" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria("cure")
{
	_type = copy.getType();
	std::cout << "\e[0;33mCopy Constructor called of Cure\e[0m" << std::endl;
}

// Operators
Cure & Cure::operator=(const Cure &assign)
{
	_type = assign.getType();
	return *this;
}

// Destructor
Cure::~Cure()
{
	std::cout << "\e[0;31mDestructor called of Cure\e[0m" << std::endl;
}

AMateria* Cure::clone(void) const
{
	return (new Cure());
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << " *" << std::endl;
}

