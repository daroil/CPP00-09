#pragma once

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(Intern const &Intern);
        Intern &operator=(Intern const &copy);

        AForm* makeForm(std::string formName, std::string target);
};