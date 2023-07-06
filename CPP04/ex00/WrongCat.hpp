/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:50:55 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/07 16:55:53 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
        WrongCat(void);
        ~WrongCat();
        WrongCat(WrongCat const &WrongCat);
        WrongCat &operator=( WrongCat const &obj );
        void	makeSound(void) const;
	protected:

};


#endif