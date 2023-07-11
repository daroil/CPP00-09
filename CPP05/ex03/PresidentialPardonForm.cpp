#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(void) : AForm(5, 25, "PresidentialPardonForm"), _target("You")
{
    std::cout << "The default PresidentialPardonForm was created" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(5, 25, "PresidentialPardonForm"), _target(target)
{
    std::cout << "The PresidentialPardonForm was created" << std::endl;
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
    std::cout << "The pardon form died" << std::endl;
}

void    PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if (executor.getGrade() > this->getReqGradeExecute())
        throw AForm::GradeTooLowException();
    if (!this->getSigned())
        throw AForm::FormNotSignedException();
    else
        std::cout << _target << "was pardoned by Zaphod Beeblebrox" << std::endl;

}