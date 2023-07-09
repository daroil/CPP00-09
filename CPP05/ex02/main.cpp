#include "Bureaucrat.hpp"
#include "AForm.hpp"

#define GRADE	1

int main() {
    Form first;
    Form *second = new Form();
    Form *third = new Form(3, 3, "strange form");
    Bureaucrat guy(150, "cringe");

    first = *second;
    *second = *third;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << third << std::endl;
    guy.signForm(third);
    delete second;
    delete  third;
    return (0);
}
