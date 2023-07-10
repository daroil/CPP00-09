#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(void) : AForm(5, 25, "PresidentialPardonForm")
{
    std::cout << "The default PresidentialPardonForm was created" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(5, 25, "PresidentialPardonForm"), _target(target)
{
    std::cout << "The PresidentialPardonForm was created" << std::endl;
}

const char* PresidentialPardonForm::GradeTooHighException::what() const throw()
{
    return (" grade is too high");
}

const char* PresidentialPardonForm::GradeTooLowException::what() const throw()
{
    return (" grade is too low");
}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &PresidentialPardonForm)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = PresidentialPardonForm;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( PresidentialPardonForm const &copy) {
    this->_target = copy._target;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "The Clerk died" << std::endl;
}

void    PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if (executor.getGrade() > this.getReqGradeExecute())
        std::cout << "Grade too low" << std::endl;

    std::cout << "CALLED EXECUTE" << std::endl;

}