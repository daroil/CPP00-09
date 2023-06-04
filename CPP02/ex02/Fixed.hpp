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

		//constructors
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const &fixed);
		Fixed(float const value);
		Fixed(int const value);

		//bool operators
		bool	operator<(Fixed const &fixed) const; 
		bool	operator<=(Fixed const &fixed) const; 
		bool	operator>(Fixed const &fixed) const; 
		bool	operator>=(Fixed const &fixed) const; 
		bool	operator==(Fixed const &fixed) const; 
		bool	operator!=(Fixed const &fixed) const; 
		
		//num operators
		Fixed	&operator=(Fixed const &fixed);
		Fixed	operator+(Fixed const &fixed) const; 
		Fixed	operator-(Fixed const &fixed) const; 
		Fixed	operator*(Fixed const &fixed) const; 
		Fixed	operator/(Fixed const &fixed) const; 
		
		//increment operator
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		//auxiliary
		static Fixed		&min(Fixed &f1, Fixed &f2);
		static Fixed const	&min(Fixed const &f1, Fixed const &f2);
		static Fixed		&max(Fixed &f1, Fixed &f2);
		static Fixed const	&max(Fixed const &f1, Fixed const &f2);
		void	display(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		//converting		
		float	toFloat(void) const;
		int		toInt(void) const;
	
	private:
		int					_integer;
		static const int	_fractBits = 8;
};

std::ostream&	operator<<(std::ostream &os, Fixed const &fixed);

#endif