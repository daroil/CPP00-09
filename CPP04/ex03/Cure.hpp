/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:33:53 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/20 15:10:30 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>

#include "AMateria.hpp"

class Cure : public AMateria 
{
	public:
		// Constructors
		// Cure();
		// Cure(const AMateria &copy);
		Cure(std::string const  &type);
		
		// Destructor
		virtual ~Cure();
		
		// Operators
		Cure & operator=(const Cure &assign);
		AMateria* clone() const;
	protected:
};

#endif