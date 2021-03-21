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
    copy.getAPCost();
    return (*this);
}

void        PowerFist::attack() const
{
    std::cout<<"* pschhh... SBAM! *\n";
}