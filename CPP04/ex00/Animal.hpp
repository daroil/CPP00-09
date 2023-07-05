/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:08:09 by dhendzel          #+#    #+#             */
/*   Updated: 2023/07/05 16:09:45 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>

class Animal
{
	public:
		Animal(void);
		~Animal();
		Animal(Animal const &Animal);
		Animal &operator=(Animal const &copy);
		virtual void	makeSound(void) const;
	protected:
		std::string _type;
};


#endif