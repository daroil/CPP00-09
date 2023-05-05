/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 02:55:21 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/05 15:46:06 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void) 
{
	std::string	input;
	Phonebook phone;
	
	std::cout << "Welcome to a very wonderful CrapBook" << std::endl;
	std::cout << "Please enter your prompt" << std::endl;
	std::cout << "Type HELP, if you need help!" << std::endl;
	while(1)
	{
		//wait for prompt
		// std::getline(std::cin,input);
		input = phone.getInput(0);
		//if prompt == exit - break
		if (input == "EXIT")
		{
			std::cout << "case 1" << std::endl;
			return(0);
		}
		//else if prompt == add - exec add
		else if (input == "ADD")
		{
			phone.setContact(0);
			std::cout << "case 2" << std::endl;
		}
		//else if prompt == search - exec search
		else if (input == "SEARCH")
		{
			phone.printContact(0);
			std::cout << "case 3" << std::endl;
		}
		else if (input == "HELP")
		{
			std::cout << "To add new contact type ADD" << std::endl;
			std::cout << "To search through existing contacts type SEARCH" << std::endl;
			std::cout << "To exit type EXIT" << std::endl;
		}
		else
			std::cout << "Wrong command\nType HELP if you need help" << std::endl;
		//otherwise continue the loop
	}
	return (0);
}