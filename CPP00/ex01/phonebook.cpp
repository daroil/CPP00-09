/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 02:53:58 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/03 12:36:36 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook() : publical(0), _private(1) {}

Phonebook::~Phonebook() {}

void	Phonebook::increasePrivate(void)
{
	if (_private < 2)
		_private++;
	else
	{
		_private = 0;
		std::cout << "max private reached" << std::endl;
	}
}

void	Phonebook::showPrivate(void)
{
	std::cout << "private =" << _private << std::endl;
}