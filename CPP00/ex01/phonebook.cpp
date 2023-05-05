/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 02:53:58 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/05 18:51:47 by dhendzel         ###   ########.fr       */
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

void	Phonebook::setContact(void)
{
	if (_index > 7)
	{
		_index = 0;
	}
	_array[_index].setFirstName(getInput(1, "Enter First Name"));
	_array[_index].setLastName(getInput(1, "Enter Last Name"));
	_array[_index].setNickName(getInput(1, "Enter Nick Name"));
	_array[_index].setPhoneNbr(getInput(0, "Enter Phone Number"));
	_array[_index].setDarkSecret(getInput(1, "Enter Darkest Secret"));
	_index++;
	if (_counter <= 7)
		_counter++;
}

void	Phonebook::printContact(void)
{
	int	index;
	
	if (_counter == 0)
	{
		std::cout << "You must add some contacts first!" << std::endl;
		return ;
	}
	index = std::stoi(getInput(3, "Enter index"));
	std::cout << _array[index].getFirstName() << std::endl;
	std::cout << _array[index].getLastName() << std::endl;
	std::cout << _array[index].getNickName() << std::endl;
	std::cout << _array[index].getPhoneNbr() << std::endl;
	std::cout << _array[index].getDarkSecret() << std::endl;
}

bool	Phonebook::stringIsAlpha(const std::string input)
{
	for (size_t i = 0; i < input.length(); i++)
	{
		if (!std::isalpha(input[i]))
		{
			std::cout << "WRONG, try again!" << std::endl;
			return (false);
		}
	}
	return (true);
}

bool	Phonebook::stringIsDigit(const std::string input)
{
	for (size_t i = 0; i < input.length(); i++)
	{
		if (!std::isdigit(input[i]))
		{
			std::cout << "WRONG, try again!" << std::endl;
			return (false);
		}
	}
	return (true);
}

const std::string	Phonebook::getInput(int curCase, const std::string prompt)
{
	std::string	input;
	while (1)
	{
		if (curCase == 1)
		{
			std::cout << prompt << std::endl;
			std::cout << "Only alpha!" << std::endl;
			std::getline(std::cin,input);
			if (stringIsAlpha(input))
				return (input);
		}
		else if (curCase == 0)
		{
			std::cout << prompt << std::endl;
			std::cout << "Only digits!" << std::endl;
			std::getline(std::cin,input);
			if (stringIsDigit(input))
				return (input);
		}
		else if (curCase == 3)
		{
			int	index;
			std::cout << prompt << std::endl;
			std::cout << "Only digits!" << std::endl;
			std::getline(std::cin,input);
			if (stringIsDigit(input))
			{
				index = std::stoi(input);
				if (index > 7 || index < 0 || index >= _counter)
					std::cout << "Wrong index" << std::endl;
				else
					return(input);
			}
		}
		else
		{
			std::cout << "Danila, you stupid shit, check your functions!" << std::endl;
			return (NULL);
		}
	}
}

void	Phonebook::showPrivate(void)
{
	std::cout << "private =" << _index << std::endl;
}