

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _materias(new AMateria *[4])
{
    std::cout << "Default constructor of Materia source" << std::endl;
    for(int i = 0; i < 4; i++)
        _materias[i] = NULL;
};

MateriaSource::~MateriaSource()
{
    if (_materias)
        delete [] _materias;
};

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    std::cout << "Copy Constructor of Character called" << std::endl;
    *this = copy;
};

AMateria** MateriaSource::cloneMaterias(void) const
{
    AMateria** newMaterias = new AMateria *[4];
    int idx = 0;
    while (idx <= 3)
    {
        if (_materias[idx] != NULL)
            newMaterias[idx] = _materias[idx];
        idx++;
    }
    return (newMaterias);
}

MateriaSource & MateriaSource::operator=(const MateriaSource &assign)
{
    if (this != &assign)
    {
        if (_materias != NULL)
            delete [] _materias;
        _materias = assign.cloneMaterias();
    }
    return *this;
};

void MateriaSource::learnMateria(AMateria *materia)
{
    int idx = 0;
    while (idx <= 3)
    {
        if (_materias[idx] == NULL)
        {
            _materias[idx] = materia;
            std::cout << "learned materia " << materia->getType() << std::endl;
            return ;
        }
        idx++;
    }
}

AMateria * MateriaSource::createMateria(const std::string &type)
{
    for(int i =0; i < 4; i++)
    {
        if (_materias[i]->getType() == type)
            return (_materias[i]->clone());
    }
    return 0;
};