/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:10:55 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/11 12:45:42 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	checkleaks(void)
{
	system("leaks ex01");
}

int main( void ) 
{
	// atexit(checkleaks);
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// Animal* first = new Animal();
	// Cat* second = new Cat();
	// Animal* third = new Dog();
	// Animal* six;
	// Cat		fourth;
	// Dog		fifth;
	// Dog		fifth1;
	// fifth = Dog(fifth1);
	// fifth = fifth1;
	// delete first;

	Dog		*fifth = new Dog();
	Dog		fifth1;
	fifth1 = *fifth;
	// fifth = Dog(fifth1);
	// fifth = j;
	fifth->displayIdea(2);
	delete fifth;	
	fifth1.displayIdea(2);	

	// delete second;
	// delete third;
	// delete j;
	// delete i;
	return (0);
}