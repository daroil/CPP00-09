#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm(45, 72, "RobotomyRequestForm"), _target("You")
{
    std::cout << "The default RobotomyRequestForm was created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(45, 72, "RobotomyRequestForm"), _target(target)
{
    std::cout << "The RobotomyRequestForm was created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &RobotomyRequestForm)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = RobotomyRequestForm;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( RobotomyRequestForm const &copy) {
    this->_target = copy._target;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "The Robotomy form destroyed" << std::endl;
}

void    RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    if (executor.getGrade() > this->getReqGradeExecute())
        throw AForm::GradeTooLowException();
    if (!this->getSigned())
        throw AForm::FormNotSignedException();
    else
    {
        // Create a random device to seed the random number generator
        std::random_device rd;

        // Create a random number generator and seed it with the random device
        std::mt19937 generator(rd());

        // Create a distribution to generate probabilities between 0 and 1
        std::uniform_real_distribution<double> distribution(0.0, 1.0);

        // Generate a random probability value
        double probability = distribution(generator);

        // Check if the probability is less than or equal to 0.5
        if (probability <= 0.5) {
            // Call the function
            std::cout << _target << " was succesfully robotomised" << std::endl;
        }
        else
            std::cout << _target << " unfortunately died" << std::endl;

    }
}