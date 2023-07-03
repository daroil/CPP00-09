/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:46:33 by dhendzel          #+#    #+#             */
/*   Updated: 2023/07/03 15:52:47 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Assembling the ScavTrap without name" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Assembling the ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &ScavTrap) : ClapTrap()
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ScavTrap;
}

ScavTrap::~ScavTrap(void) 
{
	std::cout << "Dissassembling the ScavTrap" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage" << std::endl;
	}
	else
		std::cout << _name << " can't do anything" << std::endl;
}

void	ScavTrap::trueAttack(ClapTrap *target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->attack(target->getName());	
		target->takeDamage(this->_attackDamage);
	}
	else
		std::cout << this->_name << " can't do anything" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		_energyPoints--;
		std::cout << this->_name << " is in gatekeeper mode" << std::endl;
	}	
	else
		std::cout << this->_name << " can't do anything" << std::endl;
}