

#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource &copy);
        MateriaSource & operator=(const MateriaSource &assign);
        void learnMateria(int *) override;
        AMateria * createMateria(const int &type) override;
    private:
        AMateria **_materias;
};