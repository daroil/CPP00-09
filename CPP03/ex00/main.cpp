/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:10:55 by dhendzel          #+#    #+#             */
/*   Updated: 2023/07/03 15:43:55 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	checkleaks(void)
{
	system("leaks ex00");
}

int main( void ) 
{
	ClapTrap	bot3;
	ClapTrap	bot("bot");
	ClapTrap	bot2("Vanya");

	// atexit(checkleaks);
	bot3 = ClapTrap(bot);
	// bot = bot2;
	std::cout << bot3.getName() << std::endl;
	for (int i = 0; i < 15; i++)
		bot.trueAttack(&bot2);
	bot3.trueAttack(&bot2);
	return (0);
}