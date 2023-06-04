/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:10:55 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/04 19:52:53 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed		a;
	Fixed const	b(10);
	Fixed const	c(42.14f);
	Fixed const	d(b);

	a = Fixed(1234.4321f);

	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "d + a is " << d + a << std::endl;
	std::cout << "d - a is " << d - a << std::endl;
	std::cout << "a / d is " << a / d << std::endl;
	std::cout << "a * d is " << a * d << std::endl;
	std::cout << "before a++ is " << a++ << std::endl;
	std::cout << "after a++ is " << a << std::endl;
	std::cout << "before a-- is " << a-- << std::endl;
	std::cout << "after a-- is " << a << std::endl;
	std::cout << "before ++a is " << ++a << std::endl;
	std::cout << "after ++a is " << a << std::endl;
	std::cout << "before --a is " << --a << std::endl;
	std::cout << "after --a is " << a << std::endl;
	std::cout << "min a b" << Fixed::min(a, b) << std::endl;
	std::cout << "max a b" << Fixed::max(a, b) << std::endl;
	// std::cout << "min a b" << a == b << std::endl;
	// std::cout << "min a b" << a != b << std::endl;
	// a = Fixed(0);
	// for (int i =0; i < 1000; i++)
	// {
	// 	a.incrementValue();
	// 	std::cout << i << ' ' << a << std::endl;
	// }
	return (0);
}