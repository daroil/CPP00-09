/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:10:55 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/20 15:27:22 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// void	checkleaks(void)
// {
// 	system("leaks ex01");
// }

int main( void ) 
{
	// atexit(checkleaks);
	// std::string	firsttype;
	// firsttype = "ice";
	Ice trial;
	Cure trial2;
	std::cout << trial.getType() << std::endl;
	std::cout << trial2.getType() << std::endl;
}