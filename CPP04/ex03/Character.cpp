
#include "Character.hpp"

Character::Character(void) : _inventory(new AMateria *[4]), _unequippedIndex(1)
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
    for(int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
    }
    delete [] _inventory;
    for(int i = 0; i < _unequippedIndex; i++)
    {
        if (_unequippedInventory[i])
            delete _unequippedInventory[i];
    }
    delete [] _unequippedInventory;
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
    while (idx <= 3)
    {
        if (_inventory[idx] != NULL)
        {
            newInventory[idx] = _inventory[idx]->clone();
            std::cout << "equipped at slot " << idx << std::endl;
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
            delete [] _inventory;
        _inventory = assign.cloneInventory();
    }
    return *this;
}

std::string const & Character::getName() const
{
    return _name;
}
void Character::equip(AMateria* m)
{
    int idx = 0;
    while (idx <= 3)
    {
        if (_inventory[idx] == NULL)
        {
            _inventory[idx] = m;
            std::cout << "equipped at slot " << idx << std::endl;
            return ;
        }
        idx++;
    }
//    _inventory[idx] = m;
}

void Character::unequip(int idx)
{
    if (_inventory[idx])
    {
        AMateria **tmp;
        tmp = _unequippedInventory;
        _unequippedInventory = new AMateria *[_unequippedIndex + 1];
        for(int i = 0; i < _unequippedIndex; i++)
            _unequippedInventory[i] = tmp[i];
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
    if (_inventory[idx])
        _inventory[idx]->use(target);
    else
        std::cout << "Nothing is equipped at the index" << std::endl;


}
