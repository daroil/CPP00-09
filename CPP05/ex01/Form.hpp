#pragma once

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
    public:
        Form(void);
        ~Form();
        Form(Form const &Form);
        Form &operator=(Form const &copy);

        void    beSigned(Bureaucrat &clerk);
        void    signForm(Bureaucrat &clerk);

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
        bool                _signed;
        const   int         _reqGrade;
        const   int         _reqGradeExecute;
};

std::ostream&	operator<<(std::ostream &os, Form const &clerk);
std::ostream&	operator<<(std::ostream &os, Form const *clerk);