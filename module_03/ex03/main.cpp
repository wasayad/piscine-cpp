#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
    FragTrap max = FragTrap("max");
    ScavTrap loubouf = ScavTrap("loubouf");
    NinjaTrap koro = NinjaTrap("koro");
    srand (time(NULL));
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
    koro.ninjaRename(max);
    max.takeDamage(25);
    koro.ninjaRestore(loubouf);
}