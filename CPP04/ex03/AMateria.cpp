/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:33:31 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/20 15:06:36 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Constructors
// AMateria::AMateria()
// {
// 	_type = 0;
// 	std::cout << "\e[0;33mDefault Constructor called of AMateria\e[0m" << std::endl;
// }

// AMateria::AMateria(const AMateria &copy)
// {
// 	_type = copy.getType();
// 	_clone() const = copy.getClone() const();
// 	_use(ICharacter &target) = copy.getUse(ICharacter &target)();
// 	std::cout << "\e[0;33mCopy Constructor called of AMateria\e[0m" << std::endl;
// }

AMateria::AMateria(std::string const  &type)
{
	// _type = type.substr(0, type.length());
	_type = type;
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
	_type = assign.getType();
	return *this;
}


// Getters / Setters
std::string const  & AMateria::getType() const
{
	return _type;
}