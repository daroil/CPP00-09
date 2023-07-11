#pragma once

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include <exception>
#include <random>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const &RobotomyRequestForm);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &copy);

        void    execute(const Bureaucrat &executor) const;

    private:
        std::string _target;

};