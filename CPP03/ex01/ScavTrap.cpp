/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:46:33 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/05 12:58:40 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Assembling the ClapTrap without name" << std::endl;
}

ScavTrap::~ScavTrap(void) 
{
	std::cout << "Dissassembling the ClapTrap" << std::endl;
}