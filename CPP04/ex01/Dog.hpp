/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:20:15 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/09 14:53:55 by dhendzel         ###   ########.fr       */
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
	private:
		Brain* _brain;
};


#endif