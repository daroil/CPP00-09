#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

#define GRADE	1

void    checkleaks(void)
{
    system("leaks ex02");
}

int main() {
    atexit(checkleaks);
    PresidentialPardonForm first;
    RobotomyRequestForm first2;
    ShrubberyCreationForm first3;
    AForm *second;
    PresidentialPardonForm *third = new PresidentialPardonForm("strange AForm");
    PresidentialPardonForm & formRef = first;
    RobotomyRequestForm & formRef2 = first2;
    ShrubberyCreationForm & formRef3 = first3;
    Bureaucrat guy(1, "cringe");


//    first = *second;
//    *second = *third;
//    std::cout << first << std::endl;
//    std::cout << second << std::endl;
//    std::cout << third << std::endl;
//    std::cout << guy << std::endl;
//    guy.signForm(third);
//    guy.signForm(&formRef);
//    guy.signForm(&formRef2);
//    guy.executeForm(formRef2);
//    guy.executeForm(formRef);
    Intern  dude;
    second = dude.makeForm("Pres", "Another dude");
//    formRef = second;
    guy.signForm(second);
    guy.executeForm(*second);
    delete second;
    delete  third;
    return (0);
}
