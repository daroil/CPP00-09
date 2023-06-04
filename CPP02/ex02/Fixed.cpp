/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 06:52:19 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/04 16:30:29 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _integer(0) 
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(float const value)
{
	// std::cout << "float constructor called" << std::endl;
	_integer = (int) roundf(value * float(1 << _fractBits));
}

Fixed::Fixed(int const value)
{
	// std::cout << "int constructor called" << std::endl;
	_integer = value << _fractBits;
}

Fixed::~Fixed() 
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed	&Fixed::operator=(Fixed const &fixed)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->_integer = fixed.getRawBits();
	return (*this);
}

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

float	Fixed::toFloat(void) const
{
	return (float(_integer) / float(1 << _fractBits));
} 

int		Fixed::toInt(void) const
{
	return (_integer >> _fractBits);
}

void	Fixed::display(void)
{
	std::cout << _integer << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	_integer = raw;
	// std::cout << "setRawBits member function called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_integer);
}

std::ostream&	operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return (os);
}