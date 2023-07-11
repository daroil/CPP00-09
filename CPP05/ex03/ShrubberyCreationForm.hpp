#pragma once

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include <exception>
#include <random>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const &form);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &copy);

    void    execute(const Bureaucrat &executor) const;

private:
    std::string _target;

};