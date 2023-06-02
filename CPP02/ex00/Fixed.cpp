/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 06:52:19 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/20 06:56:17 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _integer(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() 
{
	std::cout << "Default destgructor called" << std::endl;
}

void	Fixed::display(void)
{
	std::cout << _integer << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	_integer = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

int	Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_integer);
}