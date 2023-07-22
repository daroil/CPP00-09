#include "Serializer.hpp"

Serializer::Serializer(void)
{
    std::cout << "The default Serializer constructor called" << std::endl;
}

Serializer::Serializer(Serializer const &Serializer)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = Serializer;
}

Serializer &Serializer::operator=( Serializer const &copy) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &copy)
        return (*this);
    return (*this);
}

Serializer::~Serializer(void)
{
    std::cout << "The destructor called" << std::endl;
}

uintptr_t Serializer::serialize(Data *ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data*   Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}