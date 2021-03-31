#include "PowerFist.hpp"


PowerFist::PowerFist() :AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist()
{

}

PowerFist::PowerFist(PowerFist & copy)
{
    *this = copy;
}

PowerFist&     PowerFist::operator=(PowerFist & copy)
{
    setApCost(copy.getAPCost());
    setName(copy.getName());
    setDamage(copy.getDamage());
    return (*this);
}

void        PowerFist::attack() const
{
    std::cout<<"* pschhh... SBAM! *\n";
}