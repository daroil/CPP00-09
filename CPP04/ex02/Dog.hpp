/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:20:15 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/11 12:45:14 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		virtual ~Dog();
		Dog(const Dog &copy);
		Dog & operator=(const Dog &assign);
		void	makeSound(void);
		void	displayIdea(int idx);
	private:
		Brain* _brain;
};


#endif