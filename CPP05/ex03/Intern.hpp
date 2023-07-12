#pragma once

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <string>

class Intern
{
    private:
        AForm	*createRobotomyRequestForm(std::string const &target) const;
        AForm	*createPresidentialPardonForm(std::string const &target) const;
        AForm	*createShrubberyCreationForm(std::string const &target) const;

    public:
        Intern();
        ~Intern();
        Intern(Intern const &Intern);
        Intern &operator=(Intern const &copy);

        class CannotCreateForm : public std::exception
        {
        public:
            virtual const char  *what() const throw();
        };


        AForm* makeForm(std::string formName, std::string target);
};