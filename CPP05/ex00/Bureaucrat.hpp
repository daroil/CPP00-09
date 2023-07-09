/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:08:12 by dhendzel          #+#    #+#             */
/*   Updated: 2023/07/05 16:10:00 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include <exception>

class Bureaucrat
{
    public:
        Bureaucrat(void);
        Bureaucrat(int grade, std::string name);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const &Bureaucrat);
        Bureaucrat &operator=(Bureaucrat const &copy);
        unsigned int        getGrade(void) const;
        std::string const & getName(void) const;

        void    incrementGrade(void);
        void    decrementGrade(void);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char  *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char  *what() const throw();
        };
    private:
        const std::string   _name;
        int        _grade;
};

std::ostream&	operator<<(std::ostream &os, Bureaucrat const &clerk);
std::ostream&	operator<<(std::ostream &os, Bureaucrat const *clerk);