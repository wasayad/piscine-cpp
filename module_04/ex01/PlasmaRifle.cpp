#include "PlasmaRifle.hpp"


PlasmaRifle::PlasmaRifle() :AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::~PlasmaRifle()
{

}

PlasmaRifle::PlasmaRifle(PlasmaRifle & copy)
{
    *this = copy;
}

PlasmaRifle&     PlasmaRifle::operator=(PlasmaRifle & copy)
{
    setApCost(copy.getAPCost());
    setName(copy.getName());
    setDamage(copy.getDamage());
    return (*this);
}

void        PlasmaRifle::attack() const
{
    std::cout<<"* piouuu piouuu piouuu *\n";
}