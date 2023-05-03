/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 02:54:07 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/03 12:45:27 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include <cctype>

#include "contact.hpp"

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();
		void	increasePrivate();
		void	showPrivate();
		int	publical;

	private:
		Contact	_array[8];
		int		_private;
};

#endif