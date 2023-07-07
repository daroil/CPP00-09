/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:33:55 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/20 15:32:49 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "\e[0;33mFields Constructor called of Ice\e[0m" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria("ice")
{
	_type = copy.getType();
	std::cout << "\e[0;33mCopy Constructor called of Ice\e[0m" << std::endl;
}

// Destructor
Ice::~Ice()
{
	std::cout << "\e[0;31mDestructor called of Ice\e[0m" << std::endl;
}


// Operators
Ice & Ice::operator=(const Ice &assign)
{
	_type = assign.getType();
	return *this;
}

AMateria* Ice::clone(void) const
{
	return (new Ice());
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
