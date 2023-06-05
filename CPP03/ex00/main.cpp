/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:10:55 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/05 12:43:32 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) 
{
	ClapTrap	bot3;
	ClapTrap	bot("bot");
	ClapTrap	bot2("Vanya");
	std::cout << bot.getName() << std::endl;
	for (int i = 0; i < 15; i++)
		bot.trueAttack(&bot2);
	bot3.trueAttack(&bot2);
	return (0);
}