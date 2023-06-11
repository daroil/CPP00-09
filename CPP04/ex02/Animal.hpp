/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:08:09 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/11 12:43:45 by dhendzel         ###   ########.fr       */
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
		virtual ~Animal();
		Animal(const Animal &copy);
		Animal & operator=(const Animal &assign);
		virtual void	makeSound(void) = 0;
	protected:
		std::string _type;
};


#endif