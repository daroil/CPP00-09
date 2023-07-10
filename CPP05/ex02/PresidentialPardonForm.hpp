#pragma once

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include <exception>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class  PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &PresidentialPardonForm);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &copy);

        void    execute(const Bureaucrat &executor) const;

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
        std::string _target;
};