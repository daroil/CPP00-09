

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _materias(new AMateria *[4])
{
    std::cout << "Default constructor of Materia source" << std::endl;
    for(int i = 0; i < 4; i++)
        _materias[i] = NULL;
};

MateriaSource::~MateriaSource()
{
    std::cout << "destructor of Materiasource called" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        if (_materias[i])
            delete _materias[i];
    }
    delete [] _materias;
};

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    std::cout << "Copy Constructor of Materiasource called" << std::endl;
    *this = copy;
};

AMateria** MateriaSource::cloneMaterias(void) const
{
    AMateria** newMaterias = new AMateria *[4];
    int idx = 0;
    while (idx <= 3)
    {
        if (_materias[idx] != NULL)
            newMaterias[idx] = _materias[idx]->clone();
        idx++;
    }
    delete [] _materias;
    return (newMaterias);
}

MateriaSource & MateriaSource::operator=(const MateriaSource &assign)
{
    std::cout << "Assignment of materia source called" << std::endl;
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
    std::cout << "can't learn materia. Deleting" << std::endl;
    delete materia;
}

AMateria * MateriaSource::createMateria(const std::string &type)
{
    for(int i = 0; i < 4; i++)
    {
        if (_materias[i] && _materias[i]->getType() == type)
            return (_materias[i]->clone());
    }
    return NULL;
};