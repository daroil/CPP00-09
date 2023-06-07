/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:10:55 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/07 16:59:11 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void ) 
{
	Animal* first = new Animal();
	Animal* second = new Cat();
	Animal* third = new Dog();
	Cat		fourth;
	Dog		fifth;
	WrongAnimal* firstwrong = new WrongAnimal();
	WrongAnimal* secondwrong = new WrongCat();
	WrongCat		fourthwrong;
	// second->displayType();
	// third.displayType();
	first->makeSound();
	second->makeSound();
	firstwrong->makeSound();
	secondwrong->makeSound();
	third->makeSound();
	fourth.makeSound();
	fourthwrong.makeSound();
	fifth.makeSound();
	return (0);
}