/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:07:58 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/09 13:55:08 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) 
{
	std::cout << "The Brain is here" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
	std::cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << std::endl;
}
// Operators
Brain & Brain::operator=(const Brain &assign)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = assign.ideas[i];
	// ideas[100] = assign.ideas[100];
	return *this;
}
 
Brain::~Brain(void) 
{
	std::cout << "The Brain died" << std::endl;
}
