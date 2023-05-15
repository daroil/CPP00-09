/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:15:04 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/10 13:28:09 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
 
#include <cctype>
#include <iomanip>

#include "Contact.hpp"

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();
		void				setContact(void);
		void				getContact(void);
		void				printContact(void);
		const std::string	getInput(int curCase, const std::string prompt);
		std::string			trunk(const std::string input);
		bool				stringIsAlpha(const std::string input);
		bool				stringIsDigit(const std::string input);
	
	private:
		Contact				_array[8];
		int					_counter;
		int					_index;
};

#endif