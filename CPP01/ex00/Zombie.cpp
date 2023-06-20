/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:15:26 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/06 17:49:31 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string name):_name(name)
{
	std::cout << _name << " raise from the dead!" << std::endl;
}
Zombie::Zombie(void) : _name("Untitled")
{
	std::cout << "Untitled raise from the dead!" << std::endl;
}

Zombie::~Zombie(void) 
{
	std::cout << _name << " can finally rest!" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}