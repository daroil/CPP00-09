#include "AForm.hpp"

AForm::AForm() : _name("AForm"), _signed(false), _reqGrade(50), _reqGradeExecute(50)
{
//        std::cout << "Default AForm constructor called" << std::endl;
}


AForm::AForm(int gradeExec, int gradeToSign, std::string name) : _name(name), _signed(false), _reqGrade(gradeToSign), _reqGradeExecute(gradeExec)
{
    if (_reqGrade < 1 || _reqGradeExecute < 1)
        throw AForm::GradeTooHighException();
    else if (_reqGrade > 150 || _reqGradeExecute > 150)
        throw AForm::GradeTooLowException();
    else
        std::cout << "The AForm was created" << std::endl;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return (" grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return (" grade is too low");
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return (" Form is not signed");
}


AForm::~AForm()
{
//    std::cout << "Default destructor called" << std::endl;
}

AForm::AForm(const AForm &AForm) : _name(AForm._name), _signed(false), _reqGrade(AForm._reqGrade), _reqGradeExecute(AForm._reqGradeExecute)
{
//    std::cout << "Copy constructor called" << std::endl;
    *this = AForm;
}

AForm &AForm::operator=( AForm const &copy) {
//    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &copy)
        return (*this);
    _signed = copy._signed;
    return (*this);
}

std::string const & AForm::getName() const{
    return this->_name;
}

bool    AForm::getSigned() const
{
    return this->_signed;
}

unsigned int   AForm::getReqGrade() const {
    return this->_reqGrade;
}

unsigned int  AForm::getReqGradeExecute() const {
    return this->_reqGradeExecute;
}

void    AForm::beSigned(Bureaucrat *clerk) {
    if (clerk->getGrade() < 1)
        throw AForm::GradeTooHighException();
    else if (clerk->getGrade() > _reqGrade)
        throw AForm::GradeTooLowException();
    else
        _signed = true;
}


std::ostream&	operator<<(std::ostream &os, AForm const &AForm)
{
    os << AForm.getName() << ", AForm req grade " << AForm.getReqGrade() << " AForm execute grade " << AForm.getReqGradeExecute() << " Signed " << AForm.getSigned();
    return (os);
}

std::ostream&	operator<<(std::ostream &os, AForm const *AForm)
{
    os << AForm->getName() << ", AForm req grade " << AForm->getReqGrade() << " AForm execute grade " << AForm->getReqGradeExecute() << " Signed " << AForm->getSigned();
    return (os);
}