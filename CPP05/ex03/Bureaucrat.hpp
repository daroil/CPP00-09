#pragma once

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    public:
        Bureaucrat(void);
        Bureaucrat(int grade, std::string name);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const &Bureaucrat);
        Bureaucrat &operator=(Bureaucrat const &copy);
        int        getGrade(void) const;
        std::string const & getName(void) const;

        void    incrementGrade(void);
        void    decrementGrade(void);
        void    signForm(AForm *AForm);
        void    executeForm(AForm const &form);
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