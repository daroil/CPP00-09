/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:15:44 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/09 12:29:32 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
	public:
		~FragTrap();
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &FragTrap);
		void		attack(const std::string &target);
		void		trueAttack(ClapTrap *target);
		void		highFiveGuys(void);
		// void		beRepaired(unsigned int amoung);
		// std::string	getName(void);
	// private:
	// 	int			_hitPoints;
	// 	int			_energyPoints;
	// 	int			_attackDamage;
	// 	std::string	_name;
};


#endif