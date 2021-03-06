#include "AWeapon.hpp"


AWeapon::AWeapon()
{
    Name = "default";
    Damage = 0;
    Apcost = 0;
}

AWeapon::~AWeapon()
{

}

AWeapon::AWeapon(AWeapon & copy)
{
    *this = copy;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage): Name(name), Damage(damage), Apcost(apcost)
{

}

AWeapon&     AWeapon::operator=(AWeapon & copy)
{
    Name = copy.Name;
    Apcost = copy.Apcost;
    Damage = copy.Damage;
    return (*this);
}

std::string const AWeapon::getName() const
{
    return (Name);
}

int        AWeapon::getAPCost() const
{
    return (Apcost);
}

int        AWeapon::getDamage() const
{
    return (Damage);
}

void       AWeapon::setDamage(int const da)
{
    Damage = da;
}

void       AWeapon::setApCost(int const ap)
{
    Apcost = ap;
}
void       AWeapon::setName(std::string const name)
{
    Name = name;
}
