/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:15:29 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/06 17:48:19 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <cctype>
#include <cstring>
#include <iostream>

class Zombie
{
	public:
		~Zombie(void);
		Zombie(void);
		Zombie(const std::string name);
		void				announce(void);
	private:
		const std::string	_name;
};

Zombie*						newZombie(std::string name);
void						randomChump(std::string name);

#endif