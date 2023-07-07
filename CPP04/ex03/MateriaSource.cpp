

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _materias(new AMateria *[4])
{
    std::cout << "Default constructor of Materia source" << std::endl;
};

~MateriaSource::MateriaSource()
{
    if (_materias)
        delete [] _materias;
};

MateriaSource::MateriaSource(const MateriaSource &copy)
{

};

MateriaSource & operator=(const MateriaSource &assign);

void learnMateria(int *) override;

AMateria * createMateria(const int &type) override;