#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int main()
{
    PowerFist rifle;

    std::cout<<rifle.getDamage()<< " "<< rifle.getAPCost()<< " "<< rifle.getName();
    rifle.attack();
    SuperMutant lui;
    RadScorpion il;
    std::cout<<lui.getHp()<<std::endl;
    lui.takeDamage(rifle.getDamage());
    std::cout<<lui.getHp()<<std::endl;
    std::cout<<il.getHp()<<std::endl;
    il.takeDamage(rifle.getDamage());
    std::cout<<il.getHp()<<std::endl;

}