/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:52:45 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/15 12:44:22 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

#include <cctype>
#include <iomanip>

class Weapon
{
	public:
		Weapon(const std::string type);
		~Weapon();
		const std::string& getType(void);
		void setType(const std::string type);
	private:
		std::string	_type;
};

#endif