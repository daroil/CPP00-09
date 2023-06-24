/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:52:41 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/24 19:11:04 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string name) : _name(name) {}

HumanB::~HumanB() {}

void	HumanB::attack(void)
{
	if (weapon)
		std::cout << _name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with their bare hands" << std::endl;
}

void	HumanB::setWeapon(Weapon &extWeapon)
{
	weapon = &extWeapon;
}