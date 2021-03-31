#include "LaserGun.hpp"


LaserGun::LaserGun() :AWeapon("Laser gun", 20, 200)
{
}

LaserGun::~LaserGun()
{

}

LaserGun::LaserGun(LaserGun & copy)
{
    *this = copy;
}

LaserGun&     LaserGun::operator=(LaserGun & copy)
{
    setApCost(copy.getAPCost());
    setName(copy.getName());
    setDamage(copy.getDamage());
    return (*this);
}

void        LaserGun::attack() const
{
    std::cout<<"*laser sound*\n";
}