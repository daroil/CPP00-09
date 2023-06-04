/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 06:52:19 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/04 19:55:04 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _integer(0) 
{

}

Fixed::Fixed(float const value)
{
	_integer = (int) roundf(value * float(1 << _fractBits));
}

Fixed::Fixed(int const value)
{
	_integer = value << _fractBits;
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed)
{
	*this = fixed;
}

//Operators

Fixed	&Fixed::operator=(Fixed const &fixed)
{
	if (this != &fixed)
		this->_integer = fixed.getRawBits();
	return (*this);
}

//bool operators

bool	Fixed::operator<(Fixed const &fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool	Fixed::operator<=(Fixed const &fixed) const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool	Fixed::operator>(Fixed const &fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool	Fixed::operator>=(Fixed const &fixed) const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool	Fixed::operator==(Fixed const &fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

bool	Fixed::operator!=(Fixed const &fixed) const
{
	return (this->toFloat() != fixed.toFloat());
}

//increment operators

Fixed	Fixed::operator++( int )
{
	Fixed	tmp = *this;
	(_integer)++;
	return (tmp);
}

Fixed	&Fixed::operator++(void)
{
	(this->_integer)++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	(this->_integer)--;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	tmp = *this;
	(_integer)--;
	return (tmp);
}

//num operators

Fixed	Fixed::operator+(Fixed const &fixed) const
{
	return (Fixed((this->toFloat() + fixed.toFloat())));
}

Fixed	Fixed::operator-(Fixed const &fixed) const
{
	return (Fixed((this->toFloat() - fixed.toFloat())));
}

Fixed	Fixed::operator*(Fixed const &fixed) const
{
	return (Fixed((this->toFloat() * fixed.toFloat())));
}

Fixed	Fixed::operator/(Fixed const &fixed) const
{
	return (Fixed((this->toFloat() / fixed.toFloat())));
}

//Converting
float	Fixed::toFloat(void) const
{
	return (float(_integer) / float(1 << _fractBits));
} 

int		Fixed::toInt(void) const
{
	return (_integer >> _fractBits);
}

//Auxiliary functions 
void	Fixed::display(void)
{
	std::cout << _integer << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	_integer = raw;
}

int	Fixed::getRawBits(void) const
{
	return (_integer);
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	return (f1 < f2 ? f1 : f2);
}

Fixed const	&Fixed::min(Fixed const &f1, Fixed const &f2)
{
	return (f1 < f2 ? f1 : f2);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	return (f1 > f2 ? f1 : f2);
}

Fixed const	&Fixed::max(Fixed const &f1, Fixed const &f2)
{
	return (f1 > f2 ? f1 : f2);
}

//Stream override

std::ostream&	operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return (os);
}