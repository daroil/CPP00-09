/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:10:55 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/15 13:07:01 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "HumanA.hpp"

int	main(int argc, char **argv)
{
	// Weapon weapon1("spear");
	// Weapon weapon2("spear");
	// HumanB chel("Dan");

	// weapon1.setType("Sword");
	// HumanA chel2("Danillka", weapon1);
	// chel.setWeapon(weapon2);
	// chel.attack();
	// chel2.attack();
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	// Weapon club = Weapon("crude spiked club");
	// HumanB jim("Jim");
	// jim.setWeapon(club);
	// jim.attack();
	// club.setType("some other type of club");
	// jim.attack();
	return (0); 
}