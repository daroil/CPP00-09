#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
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
    PresidentialPardonForm *second = new PresidentialPardonForm();
    PresidentialPardonForm *third = new PresidentialPardonForm("strange AForm");
    PresidentialPardonForm & formRef = first;
    RobotomyRequestForm & formRef2 = first2;
    ShrubberyCreationForm & formRef3 = first3;
    Bureaucrat guy(1, "cringe");


    first = *second;
    *second = *third;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << third << std::endl;
    std::cout << guy << std::endl;
    guy.signForm(third);
    guy.signForm(&formRef);
    guy.signForm(&formRef2);
    guy.signForm(&formRef3);
    guy.executeForm(formRef);
    guy.executeForm(formRef2);
    guy.executeForm(formRef3);
    delete second;
    delete  third;
    return (0);
}
