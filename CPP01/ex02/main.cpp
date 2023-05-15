/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:10:55 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/13 10:04:45 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	
	std::string string = "HI THIS IS BRAIN";
	std::string string2 = "HBRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	string[5] = 'g';
	stringREF[5] = 'h';	
	std::cout << "Memory address of the string variable " << &string << std::endl;
	std::cout << "Memory address held by stringPTR " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF " << &stringREF << std::endl;
	std::cout << "This is the value of variable string" << string << std::endl;
	std::cout << "This is the value pointed to by stringPTR " << *stringPTR << std::endl;
	std::cout << "This is the value pointed to by stringREF " << stringREF << std::endl;
	stringREF.append("hui");
	std::cout << "This is the value pointed to by stringREF " << stringREF << std::endl;
	string.append("hui");
	std::cout << "This is the value of variable string" << string << std::endl;
	stringREF = string2;
	std::cout << "This is the value pointed to by stringREF " << stringREF << std::endl;
	stringPTR->append("hui");
	return (0);
}