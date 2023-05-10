/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 02:55:21 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/10 13:09:06 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void) 
{
	std::string	input;
	Phonebook phone;
	
	std::cout << "Welcome to a very wonderful CrapBook" << std::endl;
	std::cout << "Type HELP, if you need help!" << std::endl;
	while(1)
	{
		//wait for prompt
		input = phone.getInput(1, "Please enter your prompt");
		//if prompt == exit - break
		if (input == "EXIT")
			return(0);
		//else if prompt == add - exec add
		else if (input == "ADD")
			phone.setContact();
		//else if prompt == search - exec search
		else if (input == "SEARCH")
			phone.getContact();
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