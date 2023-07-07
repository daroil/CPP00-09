/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:33:31 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/20 15:33:13 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Constructors
// AMateria::AMateria()
// {
// 	_type = 0;
// 	std::cout << "\e[0;33mDefault Constructor called of AMateria\e[0m" << std::endl;
// }

AMateria::AMateria(const AMateria &copy)
{
	_type = copy.getType();
    _equipped = false;
	std::cout << "\e[0;33mCopy Constructor called of AMateria\e[0m" << std::endl;
}

AMateria::AMateria(std::string const  &type)
{
	_type = type;
    _equipped = false;
	std::cout << "\e[0;33mFields Constructor called of AMateria\e[0m" << std::endl;
}


// Destructor
AMateria::~AMateria()
{
	std::cout << "\e[0;31mDestructor called of AMateria\e[0m" << std::endl;
}


// Operators
AMateria & AMateria::operator=(const AMateria &assign)
{
    std::cout << "Amateria assignment called " << std::endl;
    if (this == &assign)
        return(*this);
    _type = assign.getType();
	return *this;
}


// Getters / Setters
std::string const  & AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter &target) {
    (void)target;
    std::cout << "*" << std::endl;
}

bool    AMateria::isEquipped(void) const
{
    return _equipped;
}

void   AMateria::setEquipped(void)
{
    _equipped = true;
}