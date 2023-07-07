/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:33:56 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/20 15:30:17 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>

#include "AMateria.hpp"

class Ice : public AMateria 
{
	public:
		// Constructors
		Ice();
		Ice(const Ice &copy);

		// Destructor
		virtual ~Ice();

		// Operators
		Ice & operator=(const Ice &assign);
		AMateria* clone() const;
        void use(ICharacter &target);
	protected:
};

#endif