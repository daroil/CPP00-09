/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:07:58 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/09 14:36:37 by dhendzel         ###   ########.fr       */
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
	std::cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << std::endl;
}
// Operators
Brain & Brain::operator=(const Brain &assign)
{
	std::cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = assign.ideas[i];
	return *this;
}
 
Brain::~Brain(void) 
{
	std::cout << "The Brain died" << std::endl;
}
