#pragma once

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form(void);
        ~Form();
        Form(unsigned int gradeExec, unsigned int gradeToSign, std::string name);
        Form(Form const &Form);
        Form &operator=(Form const &copy);

        void    beSigned(Bureaucrat *clerk);

        std::string const & getName() const;
        unsigned int                 getReqGrade() const;
        unsigned int                 getReqGradeExecute() const;
        bool                getSigned() const;


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
        const   unsigned int         _reqGrade;
        const   unsigned int         _reqGradeExecute;
};

std::ostream&	operator<<(std::ostream &os, Form const &clerk);
std::ostream&	operator<<(std::ostream &os, Form const *clerk);