/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:10:55 by dhendzel          #+#    #+#             */
/*   Updated: 2023/07/03 15:55:51 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) 
{
	ScavTrap	bot5("hei");
	FragTrap	botik("Lena");
	ScavTrap	bot4;
	ClapTrap	bot3;
	ClapTrap	bot("bot");
	ClapTrap	bot2("Vanya");
	std::cout << bot.getName() << std::endl;
	for (int i = 0; i < 5; i++)
		bot.trueAttack(&bot5);
	bot3.trueAttack(&bot5);
	bot4.trueAttack(&bot5);
	bot5.guardGate();
	botik.trueAttack(&bot5);
	botik.highFiveGuys();
	return (0);
}