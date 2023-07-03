/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:46:28 by dhendzel          #+#    #+#             */
/*   Updated: 2023/07/03 15:52:48 by dhendzel         ###   ########.fr       */
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
};


#endif