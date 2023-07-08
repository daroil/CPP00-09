/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:20:12 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/07 16:55:45 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		~Cat();
        Cat(Cat const &Cat);
        Cat &operator=( Cat const &obj );
        void	makeSound(void) const;
	protected:
};


#endif