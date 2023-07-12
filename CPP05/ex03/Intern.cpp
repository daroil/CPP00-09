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

AForm	*Intern::createRobotomyRequestForm(std::string const &target) const
{
    return (new RobotomyRequestForm(target));
}

AForm	*Intern::createPresidentialPardonForm(std::string const &target) const
{
    return (new PresidentialPardonForm(target));
}

AForm	*Intern::createShrubberyCreationForm(std::string const &target) const
{
    return (new ShrubberyCreationForm(target));
}

const char* Intern::CannotCreateForm::what() const throw()
{
    return (" there isn't such form");
}

AForm *Intern::makeForm(std::string formName, std::string target) {
    std::string const forms[] = {"RobotomyRequest", "PresidentialPardon", "ShrubberyCreation"};
    AForm *(Intern::*functions[])(std::string const &target) const = {&Intern::createRobotomyRequestForm, &Intern::createPresidentialPardonForm, &Intern::createShrubberyCreationForm};

    for (int i = 0; i < 3; i++)
    {
        if (formName == forms[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return ((this->*functions[i])(target));
        }
    }
    throw Intern::CannotCreateForm();
//    std::cout << "Intern cannot create form " << formName << std::endl;
//    return (NULL);
}