/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:52:43 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/15 13:04:47 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(const std::string name);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon &weapon);
		Weapon *weapon;
	private:
		const std::string _name;
};

#endif