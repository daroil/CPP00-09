#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

#define GRADE	1

void    checkleaks(void)
{
    system("leaks ex03");
}


void    PresidentialPardonFormTry(void)
{
    PresidentialPardonForm first;
    RobotomyRequestForm first2;
    ShrubberyCreationForm first3;
    AForm *second;
    Bureaucrat guy(1, "cringe");
    Intern  dude;
    try{
        second = dude.makeForm("Pres", "Another dude");
        guy.signForm(second);
        guy.executeForm(*second);
        delete second;
    }
    catch (Intern::CannotCreateForm &e)
    {
        std::cout << "couldn't create form because" << e.what() << std::endl;
    }
    try
    {
        second = dude.makeForm("PresidentialPardon", "Another dude");
        guy.signForm(second);
        guy.executeForm(*second);
        delete second;
    }
    catch (Intern::CannotCreateForm &e)
    {
        std::cout << "couldn't create form because" << e.what() << std::endl;
    }
}

void    ShrubberyTry(void)
{
    PresidentialPardonForm first;
    RobotomyRequestForm first2;
    ShrubberyCreationForm first3;
    AForm *second;
    Bureaucrat guy(1, "cringe");
    Intern  dude;
    try{
        second = dude.makeForm("Shrub", "Another dude");
        guy.signForm(second);
        guy.executeForm(*second);
        delete second;
    }
    catch (Intern::CannotCreateForm &e)
    {
        std::cout << "couldn't create form because" << e.what() << std::endl;
    }
    try
    {
        second = dude.makeForm("ShrubberyCreation", "Another dude");
        guy.signForm(second);
        guy.executeForm(*second);
        delete second;
    }
    catch (Intern::CannotCreateForm &e)
    {
        std::cout << "couldn't create form because" << e.what() << std::endl;
    }
}

void    RobotomyRequestFormTry(void)
{
    PresidentialPardonForm first;
    RobotomyRequestForm first2;
    ShrubberyCreationForm first3;
    AForm *second;
    Bureaucrat guy(1, "cringe");
    Intern  dude;
    try{
        second = dude.makeForm("Robot", "Another dude");
        guy.signForm(second);
        guy.executeForm(*second);
        delete second;
    }
    catch (Intern::CannotCreateForm &e)
    {
        std::cout << "couldn't create form because" << e.what() << std::endl;
    }
    try
    {
        second = dude.makeForm("RobotomyRequest", "Another dude");
        guy.signForm(second);
        guy.executeForm(*second);
        delete second;
    }
    catch (Intern::CannotCreateForm &e)
    {
        std::cout << "couldn't create form because" << e.what() << std::endl;
    }
}

int main() {
//    atexit(checkleaks);
    ShrubberyTry();
    PresidentialPardonFormTry();
    RobotomyRequestFormTry();
    return (0);
}
