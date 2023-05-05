/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 02:54:07 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/05 15:51:39 by dhendzel         ###   ########.fr       */
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
		void	setContact(int index);
		void	printContact(int index);
		const std::string	getInput(int curCase);
		int	publical;
	private:
		Contact	_array[8];
		int		_counter;
		int		_index;
};

#endif