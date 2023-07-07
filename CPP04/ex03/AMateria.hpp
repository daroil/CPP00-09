/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:33:40 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/20 15:33:20 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
# include <iostream>
# include <string>

class ICharacter;

class AMateria
{
	public:
		// Constructors
		AMateria(std::string const  &type);
		AMateria(const AMateria &copy);
		// AMateria();

		// Destructor
		virtual ~AMateria();
		
		// Operators
		AMateria & operator=(const AMateria &assign);
		
		// Getters / Setters
		std::string const  &  getType() const;
		virtual AMateria* clone() const = 0;
        virtual void use(ICharacter &target);
        bool    isEquipped(void) const;
        void   setEquipped(void);
		
	protected:
		std::string _type;
        bool    _equipped;
		
};
