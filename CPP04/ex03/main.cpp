/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:10:55 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/20 15:27:22 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

// void	checkleaks(void)
// {
// 	system("leaks ex01");
// }

int test()
{
//    IMateriaSource* src = new MateriaSource();
//    src->learnMateria(new Ice());
//    src->learnMateria(new Cure());
//    ICharacter* me = new Character("me");
    Character me("me");
    AMateria* tmp = new Ice();
//    tmp = src->createMateria("ice");
    me.equip(tmp);
    me.unequip(0);
    me.unequip(1);
//    tmp = src->createMateria("cure");
//    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me.use(0, *bob);
    me.use(1, *bob);
    delete bob;
    delete tmp;
//    delete me;
//    delete src;
    return(0);
}

int main( void ) 
{
	// atexit(checkleaks);
	// std::string	firsttype;
	// firsttype = "ice";
    test();
    Ice trial;
    Cure trial2;
    std::cout << trial.getType() << std::endl;
    std::cout << trial2.getType() << std::endl;
}