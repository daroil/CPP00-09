/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:20:15 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/07 16:40:42 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
        Dog(void);
        ~Dog();
        Dog(Dog const &Dog);
        Dog &operator=( Dog const &obj );
        void	makeSound(void) const;
	protected:
};


#endif