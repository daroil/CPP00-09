#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#define GRADE	1

int main() {
    PresidentialPardonForm first;
    PresidentialPardonForm *second = new PresidentialPardonForm();
    PresidentialPardonForm *third = new PresidentialPardonForm("strange AForm");
    Bureaucrat guy(150, "cringe");

    first = *second;
    *second = *third;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << third << std::endl;
//    guy.signForm(third);
    delete second;
    delete  third;
    return (0);
}
