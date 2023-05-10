/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:15:29 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/10 14:47:02 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <cctype>
#include <cstring>
#include <iostream>
#include <iomanip>

class Zombie
{
	public:
		~Zombie(void);
		Zombie(void);
		void				announce(void);
		void				setName(std::string name);
	private:
		std::string	_name;
};

Zombie*						newZombie(std::string name);
void						randomChump(std::string name);
Zombie*						zombieHorde(int N, std::string name);
bool						stringIsDigit(const std::string input);

#endif