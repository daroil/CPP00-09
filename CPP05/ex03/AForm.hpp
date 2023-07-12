#pragma once

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    public:
        AForm(void);
        virtual ~AForm();
        AForm(int gradeExec, int gradeToSign, std::string name);
        AForm(AForm const &AForm);
        AForm &operator=(AForm const &copy);

        void    beSigned(Bureaucrat *clerk);

        std::string const & getName() const;
        int                 getReqGrade() const;
        int                 getReqGradeExecute() const;
        bool                getSigned() const;
        virtual void        execute(Bureaucrat const & executor) const = 0;


        class FormNotSignedException : public std::exception
        {
           public:
                virtual const char  *what() const throw();
        };

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

std::ostream&	operator<<(std::ostream &os, AForm const &clerk);
std::ostream&	operator<<(std::ostream &os, AForm const *clerk);