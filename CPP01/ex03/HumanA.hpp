/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:52:39 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/15 13:02:19 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(const std::string name, Weapon &extWeapon);
		~HumanA();
		void	attack(void);
		Weapon &weapon;
	private:
		const std::string _name;
};

#endif