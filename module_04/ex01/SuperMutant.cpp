#include "SuperMutant.hpp"


SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout<< "Gaaah. Me want smash heads!\n";
}

SuperMutant::~SuperMutant()
{
    std::cout<<"Aaargh...\n";
}

SuperMutant::SuperMutant(SuperMutant & copy)
{
    *this = copy;
}

SuperMutant&     SuperMutant::operator=(SuperMutant & copy)
{
    setHp(copy.getHp());
    setType(copy.getType());
    return (*this);
}

void            SuperMutant::takeDamage(int amount)
{
    amount -= 3;
    Enemy::takeDamage(amount);
}
