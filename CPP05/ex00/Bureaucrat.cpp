/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:08:12 by dhendzel          #+#    #+#             */
/*   Updated: 2023/07/05 16:10:00 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default clerk"), _grade(1)
{
    std::cout << "The default Bureaucrat rose from the papers" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return (" is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return (" is too low");
}

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade = grade;
    std::cout << "The Bureaucrat rose from the papers" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &Bureaucrat)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = Bureaucrat;
}

Bureaucrat &Bureaucrat::operator=( Bureaucrat const &copy) {
    this->_grade = copy._grade;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "The Clerk died" << std::endl;
}

unsigned int    Bureaucrat::getGrade() const{
    return this->_grade;
}

std::string const & Bureaucrat::getName() const{
    return this->_name;
}

void    Bureaucrat::incrementGrade(void)
{
    if ((_grade - 1) < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade -= 1;
}

void    Bureaucrat::decrementGrade(void)
{
    if ((_grade + 1) > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade += 1;
}

std::ostream&	operator<<(std::ostream &os, Bureaucrat const &clerk)
{
    os << clerk.getName() << ", bureaucrat grade " << clerk.getGrade();
    return (os);
}

std::ostream&	operator<<(std::ostream &os, Bureaucrat const *clerk)
{
    os << clerk->   getName() << ", bureaucrat grade " << clerk->   getGrade();
    return (os);
}