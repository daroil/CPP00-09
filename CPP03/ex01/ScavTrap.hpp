/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:46:28 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/05 13:06:08 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
	public:
		ScavTrap(void);
		~ScavTrap();
		// ScavTrap(std::string name);
		// void		attack(const std::string &target);
		// void		trueAttack(ClapTrap *target);
		// void		takeDamage(unsigned int amount);
		// void		beRepaired(unsigned int amoung);
		// std::string	getName(void);
	private:
		// int			_hitPoints;
		// int			_energyPoints;
		// int			_attackDamage;
		// std::string	_name;
};


#endif