/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:46:28 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/09 12:29:50 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
	public:
		~ScavTrap();
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &ScavTrap);
		void		attack(const std::string &target);
		void		trueAttack(ClapTrap *target);
		void		guardGate(void);
		// void		beRepaired(unsigned int amoung);
		// std::string	getName(void);
	// private:
	// 	int			_hitPoints;
	// 	int			_energyPoints;
	// 	int			_attackDamage;
	// 	std::string	_name;
};


#endif