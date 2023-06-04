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
		Fixed(void);
		~Fixed(void);
		Fixed &operator=(Fixed const &fixed);
		Fixed operator+(Fixed const &fixed) const; 
		Fixed operator-(Fixed const &fixed) const; 
		Fixed operator*(Fixed const &fixed) const; 
		Fixed operator/(Fixed const &fixed) const; 
		Fixed(Fixed const &fixed);

		Fixed(float const value);
		Fixed(int const value);
		
		float	toFloat(void) const;
		int		toInt(void) const;
		
		void	display(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					_integer;
		static const int	_fractBits = 8;
};

std::ostream&	operator<<(std::ostream &os, Fixed const &fixed);

#endif