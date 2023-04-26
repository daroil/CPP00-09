/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 02:55:21 by dhendzel          #+#    #+#             */
/*   Updated: 2023/04/26 11:58:05 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void) 
{
	std::string	input;

	while(1)
	{
		//wait for prompt
		//if prompt == exit - break
		std::getline(std::cin,input);
		if (input == "EXIT")
		{
			std::cout << "case 1" << std::endl;
			return(0);
		}
		//else if prompt == add - exec add
		else if (input == "ADD")
			std::cout << "case 2" << std::endl;
		//else if prompt == search - exec search
		else if (input == "SEARCH")
			std::cout << "case 3" << std::endl;
		//otherwise continue the loop
	}
	return (0);
}