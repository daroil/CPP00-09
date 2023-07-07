

#pragma  once

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>

class Character : public ICharacter
{
    public:
        ~Character();
        Character();
        Character(std::string name);
        Character(const Character &copy);
        Character & operator=(const Character &assign);

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        AMateria** cloneInventory(void) const;
    private:
        AMateria **_inventory;
        AMateria **_unequippedInventory;
        int _unequippedIndex;
        std::string _name;
};