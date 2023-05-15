/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:52:41 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/15 13:04:39 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string name) : _name(name) {}

HumanB::~HumanB() {}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &extWeapon)
{
	weapon = &extWeapon;
}