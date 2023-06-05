/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 02:53:58 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/05 15:32:42 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() : _counter(0), _index(0) {}

Phonebook::~Phonebook() {}

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

std::string	Phonebook::trunk(const std::string input)
{
	std::string	truncString;
	if (input.length() >= 10)
	{
		truncString = input.substr(0,9);
    	char ch = '.';
    	truncString.push_back(ch);
		return (truncString);
	}
	else
		return(input);
}

void	Phonebook::printContact(void)
{
	std::cout << "+----------+----------+----------+----------+" << std::endl
	<< "|  INDEX   |FIRST NAME| LAST NAME| NICKNAME |" << std::endl
	<< "+----------+----------+----------+----------+" << std::endl;
	for (int i = 0 ; i < _counter ; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << std::setw(10) << trunk(_array[i].getFirstName()) << "|";
		std::cout << std::setw(10) << trunk(_array[i].getLastName()) << "|";
		std::cout << std::setw(10) << trunk(_array[i].getNickName()) << "|" << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

void	Phonebook::getContact(void)
{
	int	index;
	
	if (_counter == 0)
	{
		std::cout << "You must add some contacts first!" << std::endl;
		return ;
	}
	printContact();
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
		if (std::cin.eof()) { 
			std::cout << "Goodbye" << std::endl;
			exit(0);
		}
		if (curCase == 1)
		{
			std::cout << prompt << std::endl;
			std::cout << "Only alpha!" << std::endl;
			std::getline(std::cin,input);
			if (stringIsAlpha(input) && input.length() > 0)
				return (input);
		}
		else if (curCase == 0 || curCase == 3)
		{
			std::cout << prompt << std::endl;
			std::cout << "Only digits!" << std::endl;
			std::getline(std::cin,input);
			if (stringIsDigit(input) && input.length() > 0)
			{
				if(curCase == 3)
				{
					int	index;
					index = std::stoi(input);
					if (index > 7 || index < 0 || index >= _counter)
						std::cout << "Wrong index" << std::endl;
					else
						return(input);	
				}
				else
					return (input);
			}
		}
		else
		{
			std::cout << "Danila, you stupid shit, check your functions!" << std::endl;
			return (NULL);
		}
	}
}
