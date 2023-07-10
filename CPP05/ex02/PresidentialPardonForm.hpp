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

    private:
        std::string _target;
};