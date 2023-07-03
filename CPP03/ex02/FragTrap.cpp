/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:15:47 by dhendzel          #+#    #+#             */
/*   Updated: 2023/07/03 15:56:15 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Assembling the FragTrap without name" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Assembling the FragTrap" << std::endl;
}

FragTrap::FragTrap(FragTrap const &FragTrap) : ClapTrap(  )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = FragTrap;
}

FragTrap::~FragTrap(void) 
{
	std::cout << "Dissassembling the FragTrap" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		_energyPoints--;
		std::cout << "FragTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage" << std::endl;
	}
	else
		std::cout << _name << " can't do anything" << std::endl;
}

void	FragTrap::trueAttack(ClapTrap *target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->attack(target->getName());	
		target->takeDamage(this->_attackDamage);
	}
	else
		std::cout << this->_name << " can't do anything" << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		_energyPoints--;
		std::cout << this->_name << " is waiting for a highFive" << std::endl;
	}	
	else
		std::cout << this->_name << " can't do anything" << std::endl;
}