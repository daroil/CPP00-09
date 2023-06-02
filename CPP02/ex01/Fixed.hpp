				/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 06:52:36 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/20 06:56:32 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed &operator=(Fixed &fixed);
		Fixed(Fixed &fixed);
		void	display(void);
		int		getRawBits(void);
		void	setRawBits(int const raw);
	private:
		int					_integer;
		static const int	_fractBits = 8;
};

#endif