/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:10:55 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/20 06:55:41 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(int argc, char **argv)
{
	Fixed	fix;

	fix.display();
	std::cout << fix.getRawBits() << std::endl;
	fix.setRawBits(2);
	std::cout << fix.getRawBits() << std::endl;
	return (0);
}