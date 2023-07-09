#include "AForm.hpp"

Form::Form() : _name("Form"), _signed(false), _reqGrade(50), _reqGradeExecute(50)
{
        std::cout << "Default form constructor called" << std::endl;
}


Form::Form(int gradeExec, int gradeToSign, std::string name) : _name(name), _signed(false), _reqGrade(gradeToSign), _reqGradeExecute(gradeExec)
{
    if (_reqGrade < 1 || _reqGradeExecute < 1)
        throw Form::GradeTooHighException();
    else if (_reqGrade > 150 || _reqGradeExecute > 150)
        throw Form::GradeTooLowException();
    else
        std::cout << "The Form was created" << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return (" grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return (" grade is too low");
}

Form::~Form()
{
    std::cout << "Default destructor called" << std::endl;
}

Form::Form(const Form &Form) : _name(Form._name), _signed(false), _reqGrade(Form._reqGrade), _reqGradeExecute(Form._reqGradeExecute)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = Form;
}

Form &Form::operator=( Form const &copy) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &copy)
        return (*this);
    _signed = copy._signed;
    return (*this);
}

std::string const & Form::getName() const{
    return this->_name;
}

bool    Form::getSigned() const
{
    return this->_signed;
}

int const   Form::getReqGrade() const {
    return this->_reqGrade;
}

int const   Form::getReqGradeExecute() const {
    return this->_reqGrade;
}

void    Form::beSigned(Bureaucrat *clerk) {
    if (clerk->getGrade() < 1)
        throw Form::GradeTooHighException();
    else if (clerk->getGrade() > _reqGrade)
        throw Form::GradeTooLowException();
    else
        _signed = true;
}


std::ostream&	operator<<(std::ostream &os, Form const &form)
{
    os << form.getName() << ", Form req grade " << form.getReqGrade() << " Form execute grade " << form.getReqGradeExecute() << " Signed " << form.getSigned();
    return (os);
}

std::ostream&	operator<<(std::ostream &os, Form const *form)
{
    os << form->getName() << ", Form req grade " << form->getReqGrade() << " Form execute grade " << form->getReqGradeExecute() << " Signed " << form->getSigned();
    return (os);
}