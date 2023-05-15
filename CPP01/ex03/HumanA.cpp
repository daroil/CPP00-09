/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:52:37 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/15 13:02:05 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &extWeapon) : _name(name), weapon(extWeapon)
{
	// weapon = extWeapon;
}

HumanA::~HumanA() {}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << weapon.getType() << std::endl;
}