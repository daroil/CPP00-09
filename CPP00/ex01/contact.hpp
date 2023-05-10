/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:40:40 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/10 12:58:13 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstring>
#include <cctype>

class Contact
{
	public:
		Contact();
		~Contact();
		void				setFirstName(const std::string str);
		void				setLastName(const std::string str);
		void				setNickName(const std::string str);
		void				setPhoneNbr(const std::string str);
		void				setDarkSecret(const std::string str);
		const std::string	getFirstName(void);
		const std::string	getLastName(void);
		const std::string	getNickName(void);
		const std::string	getPhoneNbr(void);
		const std::string	getDarkSecret(void);
	private:
		std::string			_firstName;
		std::string			_lastName;
		std::string			_nickName;
		std::string			_phoneNumber;
		std::string			_darkestSecret; 
};

#endif