#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "Boss.hpp"
#include "LaserGun.hpp"
int main()
{
Character* me = new Character("me");
std::cout << *me;
Enemy* b = new RadScorpion();
AWeapon* pr = new PlasmaRifle();
AWeapon* pf = new PowerFist();
AWeapon* lg = new LaserGun();
me->equip(pr);
std::cout << *me;
me->equip(pf);
me->attack(b);
std::cout << *me;
me->equip(pr);
std::cout << *me;
me->attack(b);
std::cout << *me;
me->attack(b);
std::cout << *me;
Enemy* d = new Boss();
Enemy* c(d);
me->equip(lg);
me->attack(c);
std::cout << *me;
me->attack(c);
std::cout << *me;
me->RecoverAP();
me->RecoverAP();
me->RecoverAP();
me->RecoverAP();
me->RecoverAP();
std::cout << *me;
me->attack(c);
me->attack(c);
me->attack(c);
me->attack(c);
me->RecoverAP();
me->RecoverAP();
me->RecoverAP();
me->RecoverAP();
me->attack(c);
delete me;
delete pr;
delete pf;
delete lg;
return 0;
}