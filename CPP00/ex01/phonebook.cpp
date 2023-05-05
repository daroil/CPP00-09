/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 02:53:58 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/05 15:57:11 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook() : _counter(0), _index(0) {}

Phonebook::~Phonebook() {}

void	Phonebook::increasePrivate(void)
{
	if (_index < 2)
		_index++;
	else
	{
		_index = 0;
		std::cout << "max private reached" << std::endl;
	}
}

void	Phonebook::setContact(int index)
{
	if (index > 7)
	{
		std::cout << "wrong index" << std::endl;
		return ;
	}
	std::cout << "Enter First Name" << std::endl;
	_array[_index].setFirstName(getInput(0));
	std::cout << "Enter Last Name" << std::endl;
	_array[_index].setLastName(getInput(0));
	std::cout << "Enter Nick Name" << std::endl;
	_array[_index].setNickName(getInput(0));
	std::cout << "Enter Phone Number" << std::endl;
	_array[_index].setPhoneNbr(getInput(0));
	std::cout << "Enter Darkest Secret " << std::endl;
	_array[_index].setDarkSecret(getInput(0));
	_index++;
	_counter++;
}

void	Phonebook::printContact(int index)
{
	if (index > 7)
	{
		std::cout << "wrong index" << std::endl;
		return ;
	}
	std::cout << _array[index].getFirstName() << std::endl;
	std::cout << _array[index].getLastName() << std::endl;
	std::cout << _array[index].getNickName() << std::endl;
	std::cout << _array[index].getPhoneNbr() << std::endl;
	std::cout << _array[index].getDarkSecret() << std::endl;
}

const std::string	Phonebook::getInput(int curCase)
{
	std::string	input;
	if (curCase == 2)
		return (NULL);
	std::getline(std::cin,input);
	return (input);
}

void	Phonebook::showPrivate(void)
{
	std::cout << "private =" << _index << std::endl;
}