/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:40:43 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/03 13:24:14 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

//constructor
Contact::Contact() {}

//destructor
Contact::~Contact() {}

//setting functions
void	Contact::setFirstName(std::string const str)
{
	_firstName = str;
}

void	Contact::setLastName(std::string const str)
{
	_lastName = str;
}

void	Contact::setNickName(std::string const str)
{
	_nickName = str;
}

void	Contact::setPhoneNbr(std::string const str)
{
	_phoneNumber = str;
}

void	Contact::setDarkSecret(std::string const str)
{
	_darkestSecret = str;
}

//getting functions