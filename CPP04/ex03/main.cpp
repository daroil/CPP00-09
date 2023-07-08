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
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

// void	checkleaks(void)
// {
// 	system("leaks ex03");
// }

void customTests(void){
    MateriaSource* materiaMaker = new MateriaSource();
    ICharacter* bob = new Character("bob");
    MateriaSource stackMaker;
    Character ned("Ned");

    std::cout << "Custom Test START" << std::endl;
    materiaMaker->learnMateria(new Ice());
    materiaMaker->learnMateria(new Cure());
    materiaMaker->learnMateria(new Ice());
    materiaMaker->learnMateria(new Cure());
    materiaMaker->learnMateria(new Cure()); // tenta quinta inserção, não deve ser guardado.

    stackMaker.learnMateria(new Ice());
    stackMaker.learnMateria(new Cure());
    stackMaker.learnMateria(new Ice());
    stackMaker.learnMateria(new Cure());
    stackMaker.learnMateria(new Cure());

    std::cout << "before -" << std::endl;
    bob->equip(materiaMaker->createMateria("non")); // funcao nao gerara ponteiro valido, nada deve ser inserido
    bob->equip(materiaMaker->createMateria("ice"));
    bob->equip(materiaMaker->createMateria("cure"));
    bob->equip(materiaMaker->createMateria("ice"));
    bob->equip(materiaMaker->createMateria("cure"));
    bob->equip(materiaMaker->createMateria("ice")); // tenta quinta inserção, não deve ser guardado.
    ned.equip(stackMaker.createMateria("non")); // funcao nao gerara ponteiro valido, nada deve ser inserido
    ned.equip(stackMaker.createMateria("ice"));
    ned.equip(stackMaker.createMateria("cure"));
    ned.equip(stackMaker.createMateria("ice"));
    ned.equip(stackMaker.createMateria("cure"));
    ned.equip(stackMaker.createMateria("ice")); // tenta quinta inserção, não deve ser guardado.
    bob->use(-1, ned);
    bob->use(0, ned);
    bob->use(1, ned);
    bob->use(2, ned);
    bob->use(3, ned);
    bob->use(4, ned);
    ned.use(-1, *bob);
    ned.use(0, *bob);
    ned.use(1, *bob);
    ned.use(2, *bob);
    ned.use(3, *bob);
    ned.use(4, *bob);


    bob->unequip(-1); //tenta excluir um index nao existente
    bob->unequip(0);
    bob->unequip(1);
    bob->unequip(2);
    bob->unequip(3);
    bob->unequip(4); //tenta excluir um index nao existente
    ned.unequip(-1); //tenta excluir um index nao existente
    ned.unequip(0);
    ned.unequip(1);
    ned.unequip(2);
    ned.unequip(3);
    ned.unequip(4); //tenta excluir um index nao existente

    delete bob;
    delete materiaMaker;
    std::cout << "Custom Test END" << std::endl << std::endl;
}
void subjectTest(void){
    std::cout << "Subject Test START" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    std::cout << "Subject Test START" << std::endl << std::endl;
}

void    shortTest()
{
    Character* me = new Character("me");
    Character* tmp1 = new Character("Ty");
    Character* bob = new Character();
    IMateriaSource* src = new MateriaSource();
    AMateria* tmp;

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    tmp = src->createMateria("ice");
    me->equip(tmp);
    bob->equip(tmp);
    me->use(0,*tmp1);
    bob->use(0,*tmp1);
    *bob = *me;
    me->unequip(0);
    bob->use(0,*tmp1);
    me->use(0,*tmp1);

    delete me;
    delete tmp1;
    delete bob;
    delete src;
}

void    additionalTests()
{
    std::cout << "Add Test START" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    Character* me = new Character("me");
    Character* tmp1 = new Character("Ty");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->equip(tmp);
    Character* bob = new Character();
    *bob = *me;
    me->use(0, *bob);
    std::cout << std::endl;
    std::cout << std::endl;

    tmp1->use(0, *bob);
    *bob = *tmp1;
    tmp1->unequip(0);
    tmp1->equip(tmp);
    std::cout << std::endl;
    std::cout << std::endl;
    me->use(1, *bob);
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);
    me->unequip(1);
    me->unequip(0);
    me->unequip(2);
    me->use(1, *bob);
    bob->use(1, *me);
    delete bob;
    delete me;
    delete src;
    delete tmp1;
    std::cout << "ADD Test END" << std::endl << std::endl;
}

int main(void){
//    atexit(checkleaks);
    shortTest();
    additionalTests();
    subjectTest();
    customTests();
    return 0;
}