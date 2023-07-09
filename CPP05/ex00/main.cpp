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

#include "Bureaucrat.hpp"
#define GRADE	1

int main() {
    int ret;

    ret = 0;
    //TESTING CONSTRUCTION
    std::cout << "\033[33m****** TESTING CONSTRUCTION *******\033[0m" << std::endl;
    Bureaucrat *bureaucrat;

    bureaucrat = NULL;
    try {
        bureaucrat = new Bureaucrat(GRADE, "LOL");
        std::cout << bureaucrat << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &exception) {
        std::cerr << "Bureaucrat instantiation failed: init grade " << GRADE << exception.what() << std::endl;
        return (1);
    }
    catch (Bureaucrat::GradeTooLowException &exception) {
        std::cerr << "Bureaucrat instantiation failed: init grade " << GRADE << exception.what() << std::endl;
        return (1);
    }

    //TESTING INCREMENTAL
    std::cout << "\033[33m****** TESTING INCREMENTAL *******\033[0m" << std::endl;
    try {
        bureaucrat->incrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &exception) {
        std::cerr << "Bureaucrat incremental failed: result grade " << bureaucrat->getGrade() - 1 << exception.what() << std::endl;
        ret = 1;
    }

    //TESTING DECREMENTAL
    std::cout << "\033[33m****** TESTING DECREMENTAL *******\033[0m" << std::endl;
    try {
        bureaucrat->decrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &exception) {
        std::cerr << "Bureaucrat decremental failed: result grade " << bureaucrat->getGrade() + 1  << exception.what() << std::endl;
        ret = 1;
    }

    //DESTRUCTION
    if (bureaucrat != NULL) {
        std::cout << "\033[33m****** DESTRUCTION *******\033[0m" << std::endl;
        delete bureaucrat;
    }

    return (ret);
}
