#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
int main()
{
    srand (time(NULL));
    FragTrap max("max");
    ScavTrap loubouf("loubouf");
    NinjaTrap koro("koro");
    ClapTrap test("default", 100 ,100 ,100 ,50 ,50 , 50, 5);
    max.vaulthunter_dot_exe("unpokemon");
    max.meleeAttack("drake");
    max.rangedAttack("drake");
    max.takeDamage(50);
    max.beRepaired(10);
    loubouf.meleeAttack("bifule");
    loubouf.rangedAttack("max");
    loubouf.takeDamage(125);
    loubouf.beRepaired(50);
    loubouf.challengeNewcomer("unknown");
    koro.meleeAttack("boom");
    koro.takeDamage(25);
    koro.beRepaired(50);
    koro.ninjaShoebox(max);
    max.takeDamage(25);
    koro.ninjaShoebox(loubouf);
    koro.ninjaShoebox(koro);
    koro.ninjaShoebox(test);
}