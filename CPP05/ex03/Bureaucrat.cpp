#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default clerk"), _grade(1)
{
    std::cout << "The default Bureaucrat rose from the papers" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return (" is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return (" is too low");
}

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade = grade;
    std::cout << "The Bureaucrat rose from the papers" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &Bureaucrat)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = Bureaucrat;
}

Bureaucrat &Bureaucrat::operator=( Bureaucrat const &copy) {
    this->_grade = copy._grade;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "The Clerk died" << std::endl;
}

int    Bureaucrat::getGrade() const{
    return this->_grade;
}

std::string const & Bureaucrat::getName() const{
    return this->_name;
}

void    Bureaucrat::incrementGrade(void)
{
    if ((_grade - 1) < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade -= 1;
}

void    Bureaucrat::decrementGrade(void)
{
    if ((_grade + 1) > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade += 1;
}

void    Bureaucrat::signForm(AForm *AForm)
{
    try
    {
        AForm->beSigned(this);
        std::cout << this->getName() << " signed " << AForm->getName() << std::endl;
    }
    catch (AForm::GradeTooLowException &e)
    {
        std::cout << this->getName() << " couldn't sign AForm " << AForm->getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(const AForm & form) {
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    catch (AForm::GradeTooLowException &e)
    {
        std::cout << this->getName() << " couldn't execute " << form.getName() << " because" << e.what() << std::endl;
    }
    catch (AForm::FormNotSignedException &e)
    {
        std::cout << this->getName() << " couldn't execute " << form.getName() << " because" << e.what() << std::endl;
    }
}

std::ostream&	operator<<(std::ostream &os, Bureaucrat const &clerk)
{
    os << clerk.getName() << ", bureaucrat grade " << clerk.getGrade();
    return (os);
}

std::ostream&	operator<<(std::ostream &os, Bureaucrat const *clerk)
{
    os << clerk->   getName() << ", bureaucrat grade " << clerk->   getGrade();
    return (os);
}