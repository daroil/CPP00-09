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

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class AMateria
{
	public:
		// Constructors
		// AMateria();
		AMateria(const AMateria &copy);
		AMateria(std::string const  &type);
		
		// Destructor
		virtual ~AMateria();
		
		// Operators
		AMateria & operator=(const AMateria &assign);
		
		// Getters / Setters
		std::string const  &  getType() const;
		virtual AMateria* clone() const = 0;
		// virtual void use(ICharacter &target);
		
	protected:
		std::string _type;
		
};

#endif