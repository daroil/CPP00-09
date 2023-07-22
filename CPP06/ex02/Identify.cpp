#include "Identify.hpp"

Identify::Identify(void)
{
    std::cout << "The default Identify constructor called" << std::endl;
}

Identify::Identify(Identify const &Identify)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = Identify;
}

Identify &Identify::operator=( Identify const &copy) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &copy)
        return (*this);
    return (*this);
}

Identify::~Identify(void)
{
    std::cout << "The destructor called" << std::endl;
}
