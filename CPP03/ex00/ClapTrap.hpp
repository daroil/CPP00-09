/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 20:06:11 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/04 20:28:51 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		void		attack(const std::string &target);
		void		trueAttack(ClapTrap *target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amoung);
		std::string	getName(void);
	private:
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		std::string	_name;
};


#endif