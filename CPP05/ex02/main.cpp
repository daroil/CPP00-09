#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#define GRADE	1

int main() {
    PresidentialPardonForm first;
    PresidentialPardonForm *second = new PresidentialPardonForm();
    PresidentialPardonForm *third = new PresidentialPardonForm("strange AForm");
    PresidentialPardonForm & formRef = first;
    Bureaucrat guy(1, "cringe");

    first = *second;
    *second = *third;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << third << std::endl;
    std::cout << guy << std::endl;
    guy.signForm(third);
    guy.signForm(&formRef);
    guy.executeForm(formRef);
    delete second;
    delete  third;
    return (0);
}
