#include "Intern.hpp"

Intern::Intern(void)
{
    std::cout << "The default Intern rose from the papers" << std::endl;
}

Intern::Intern(Intern const &Intern)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = Intern;
}

Intern &Intern::operator=( Intern const &copy) {
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

Intern::~Intern(void)
{
    std::cout << "The Intern died" << std::endl;
}

AForm *Intern::makeForm(std::string formName, std::string target) {
    (void)formName;
    return (new PresidentialPardonForm(target));
}