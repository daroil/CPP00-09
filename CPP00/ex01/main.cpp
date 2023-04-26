/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 02:55:21 by dhendzel          #+#    #+#             */
/*   Updated: 2023/04/26 03:11:30 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void) 
{
	std::string	input;

	while(1)
	{
		std::getline(std::cin,input);
		if (input == "EXIT")
		{
			std::cout << "case 2" << std::endl;
			return(0);
			
		}
		//wait for prompt
		//if prompt == exit - break
		//else if prompt == add exec add
		//else if prompt == search exec search
		//otherwise restart the loop
	}
	return (0);
}