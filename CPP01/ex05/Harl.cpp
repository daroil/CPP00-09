/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 22:55:39 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/19 23:18:40 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::complain(std::string level)
{
	void (Harl::*function[]) (void) = {&Harl::info, &Harl::warning, &Harl::error, &Harl::debug};
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

void	Harl::warning(void)
{
	std::cout << "warning " << std::endl;
}

void	Harl::info(void)
{
	std::cout << "info " << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "debug " << std::endl;
}

void	Harl::error(void)
{
	std::cout << "error! " << std::endl;
}