#include "Bureaucrat.hpp"
#include "Form.hpp"

#define GRADE	1

int main() {
    Form first;
    Form *second = new Form();
    Form *third = new Form(3, 3, "strange form");
    Bureaucrat guy(150, "cringe");
    Bureaucrat guy1(1, "cringe2");

    first = *second;
    *second = *third;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << third << std::endl;
    guy.signForm(third);
    guy1.signForm(third);
    delete second;
    delete  third;
    return (0);
}
