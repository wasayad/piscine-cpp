#include "Character.hpp"

Character::Character(): name("default"), AP(40), Weapon(NULL)
{

}

Character::Character(std::string n_name): name(n_name), AP(40), Weapon(NULL)
{

}

Character::~Character(){

}

Character::Character(const Character & copy){*this = copy;}

Character & Character::operator=(const Character & copy){
    Weapon = copy.Weapon;
    AP = copy.AP;
    name = copy.name;
    return (*this);
}

void    Character::RecoverAP()
{
    if (AP + 10 > 40)
        AP = 40;
    else
        AP = AP + 10;
}

void    Character::attack(Enemy *enemy)
{
    if (Weapon != NULL && enemy != NULL)
    {
        if (AP >= Weapon->getAPCost())
        {
            std::cout<< getName()<< " attacks " << enemy->getType() << " with a "<< Weapon->getName()<< std::endl;
            AP = AP - Weapon->getAPCost();
            enemy->takeDamage(Weapon->getDamage());
            Weapon->attack();
            if (enemy->getHp() <= 0)
            {
                delete enemy;
            }
        }
        else
        {
            std::cout<<"Not enough AP to use this weapon\n";
        }
    }
}

std::string const Character::getName() const
{
    return (name);
}

AWeapon const* Character::getWeapon() const
{
    return (Weapon);
}

int       Character::getAp() const
{
    return (AP);
}

std::string const Character::getWeaponType() const
{
    return (Weapon->getName());
}

std::ostream&      operator<<(std::ostream& os, Character const& f)
{
    if (f.getWeapon() != NULL)
    {
        os << f.getName();
        os << " has ";
        os << f.getAp();
        os << " AP and wields a ";
        os << f.getWeaponType();
        os << "\n";
    }
    else
    {
        os << f.getName();
        os << " has ";
        os << f.getAp();
        os << " and is unarmed\n";
    }
    return (os);
}



void    Character::equip(AWeapon *weapon)
{
    Weapon = weapon;
}