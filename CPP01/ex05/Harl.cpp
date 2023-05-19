/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 22:55:39 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/19 23:20:05 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::complain(std::string level)
{
	void (Harl::*function[]) (void) = {&Harl::_info, &Harl::_warning, &Harl::_error, &Harl::_debug};
	std::string levels[] = {"info", "warning", "error", "debug"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*function[i])();
			return ;
		}
	}
	std::cout << "stupid gibberish " << std::endl;
	
}

void	Harl::_warning(void)
{
	std::cout << "warning " << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "info " << std::endl;
}

void	Harl::_debug(void)
{
	std::cout << "debug " << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "error! " << std::endl;
}