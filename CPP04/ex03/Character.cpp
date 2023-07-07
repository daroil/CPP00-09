
#include "Character.hpp"

Character::Character(void) : _inventory(new AMateria *[4]), _unequippedInventory(new AMateria *[1]), _unequippedIndex(1)
{
    std::cout << "Default Constructor of Character called" << std::endl;
    for(int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    for(int i = 0; i < _unequippedIndex; i++)
        _unequippedInventory[i] = NULL;
    _name = "Nameless";
}
Character::Character(std::string name) : _inventory(new AMateria *[4]), _unequippedInventory(new AMateria *[1]), _unequippedIndex(1)
{
    std::cout << "Constructor of Character called" << std::endl;
    for(int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    _name = name;
    for(int i = 0; i < _unequippedIndex; i++)
        _unequippedInventory[i] = NULL;
}

Character::~Character()
{
    std::cout << "Destructor of Character called" << std::endl;
    if (_inventory)
    {
        for(int i = 0; i < 4; i++)
        {
            if (_inventory[i] != NULL)
            {
                delete _inventory[i];
//        std::cout << "here segfault" << std::endl;
            }
        }
        delete [] _inventory;
    }
    if (_unequippedInventory)
    {
        for(int i = 0; i < _unequippedIndex; i++)
        {
            if (_unequippedInventory[i])
                delete _unequippedInventory[i];
        }
        delete [] _unequippedInventory;
    }
}


Character::Character(const Character &copy)
{
    std::cout << "Copy Constructor of Character called" << std::endl;
    *this = copy;
}

AMateria** Character::cloneInventory(void) const
{
    AMateria** newInventory = new AMateria *[4];
    int idx = 0;
    while (idx < 4)
    {
        if (_inventory[idx] != NULL)
        {
            newInventory[idx] = _inventory[idx]->clone();
            std::cout << "equipped at slot " << idx << std::endl;
        }
        else
            newInventory[idx] = NULL;
        idx++;
    }
    return (newInventory);
}

AMateria** Character::cloneUnequippedInventory(void) const
{
    AMateria** newInventory = new AMateria *[_unequippedIndex];
    for (int i = 0; i < _unequippedIndex; i++)
        newInventory[i] = NULL;
    int idx = 0;
    while (idx < _unequippedIndex)
    {
        if (_unequippedInventory[idx] != NULL)
        {
            newInventory[idx] = _unequippedInventory[idx]->clone();
            std::cout << "de equipped at slot " << idx << std::endl;
        }
        idx++;
    }
    return (newInventory);
}

Character & Character::operator=(const Character &assign)
{
    std::cout << "assignment operator called for character " << std::endl;
    if (this != &assign)
    {
        this->_name = assign.getName();
        if (_inventory != NULL)
        {
            for(int i = 0; i < 4; i++)
            {
                if (_inventory[i])
                    delete _inventory[i];
            }
            delete [] _inventory;
        }
        _inventory = assign.cloneInventory();
        if (_unequippedInventory != NULL)
        {
            for(int i = 0; i < _unequippedIndex; i++)
            {
                if (_unequippedInventory[i])
                    delete _unequippedInventory[i];
            }
            delete [] _unequippedInventory;
        }
        _unequippedInventory = assign.cloneUnequippedInventory();
        _unequippedIndex = assign._unequippedIndex;
    }
    return *this;
}

std::string const & Character::getName() const
{
    return _name;
}
void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] == m)
        {
            std::cout << "this materia already equipped" << std::endl<< std::endl<< std::endl;
            return ;
        }
    }

    int idx = 0;
    while (idx < 4)
    {
        if (_inventory[idx] == NULL)
        {
            _inventory[idx] = m;
            std::cout << "equipped at slot " << idx << std::endl;
            return ;
        }
        idx++;
    }
    std::cout << "can't equip materia. Deleting" << std::endl;
    delete m;
//    _inventory[idx] = m;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
    {
        std::cout << "wrong index" << std::endl;
        return ;
    }
    if (_inventory[idx])
    {
        AMateria **tmp;
        tmp = _unequippedInventory;
        _unequippedInventory = new AMateria *[_unequippedIndex + 1];
        for(int i = 0; i < _unequippedIndex; i++)
        {
            _unequippedInventory [i] = tmp[i];
//            tmp [i] = _unequippedInventory[i];
//            if (tmp[i])
//                std::cout << std::endl << std::endl << tmp[i]->getType() << std::endl << std::endl;
        }
        _unequippedIndex++;
        _unequippedInventory[_unequippedIndex - 1] = _inventory[idx];
        _inventory[idx] = NULL;
        std::cout << "Uneqipped at index " << idx << std::endl;
        delete [] tmp;
    }
    else
        std::cout << "There's nothing at index " << idx << std::endl;

}

void Character::use(int idx, ICharacter& target)
{
    std::cout << "trying to use inventory" << std::endl;
    if (idx < 0 || idx >= 4)
    {
        std::cout << "wrong index" << std::endl;
        return ;
    }
    if (_inventory[idx])
    {
        std::cout << "* " << _name;
        _inventory[idx]->use(target);
    }
    else
        std::cout << "Nothing is equipped at the index" << std::endl;


}
