/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:20:12 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/09 14:56:51 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		virtual ~Cat();
		Cat(const Cat &copy);
		Cat & operator=(const Cat &assign);
	private:
		Brain* _brain;
};


#endif