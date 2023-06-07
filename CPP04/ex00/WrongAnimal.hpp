/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:50:52 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/07 16:51:23 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		~WrongAnimal();
		void	makeSound(void);
	protected:
		std::string _type;
};


#endif