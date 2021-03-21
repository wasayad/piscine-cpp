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
    copy.getAPCost();
    return (*this);
}

void        PlasmaRifle::attack() const
{
    std::cout<<"* piouuu piouuu piouuu *\n";
}