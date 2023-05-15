/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:52:44 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/15 12:44:03 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type) : _type(type) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType(void)
{
	const std::string& typeREF = _type;
	return (typeREF);
}

void Weapon::setType(const std::string type)
{
	_type = type;
}