/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:08:01 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/09 13:48:57 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>

class Brain
{
	public:
		Brain(void);
		~Brain();
		Brain(const Brain &copy);
		Brain & operator=(const Brain &assign);
		std::string	ideas[100];
	// protected:
		// std::string _type;
};


#endif