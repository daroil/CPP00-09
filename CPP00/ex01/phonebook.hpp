/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 02:54:07 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/05 19:03:42 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>

#include "contact.hpp"

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();
		void	increasePrivate();
		void	showPrivate();
		void	setContact(void);
		void	getContact(void);
		void	printContact(void);
		const std::string	getInput(int curCase, const std::string prompt);
		int	publical;
		bool	stringIsAlpha(const std::string input);
		bool	stringIsDigit(const std::string input);
	
	private:
		Contact	_array[8];
		int		_counter;
		int		_index;
};

#endif