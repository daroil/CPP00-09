/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:08:09 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/11 12:33:46 by dhendzel         ###   ########.fr       */
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
		virtual ~Animal();
		Animal(const Animal &copy);
		Animal & operator=(const Animal &assign);
		void	makeSound(void);
	protected:
		Animal(void);
		std::string _type;
};


#endif