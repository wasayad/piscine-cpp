#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
int main()
{
    FragTrap max("max");
    ScavTrap loubouf("loubouf");
    NinjaTrap koro("koro");
    SuperTrap xolten("xolten");
    srand (time(NULL));
    //max.vaulthunter_dot_exe("unpokemon");
    max.meleeAttack("drake");
    max.rangedAttack("drake");
    //max.takeDamage(50);
    //max.beRepaired(10);
    //loubouf.meleeAttack("bifule");
    //loubouf.rangedAttack("max");
    //loubouf.takeDamage(125);
    //loubouf.beRepaired(50);
    //loubouf.challengeNewcomer("unknown");
    //koro.meleeAttack("boom");
    //koro.takeDamage(25);
    //koro.beRepaired(50);
    //koro.ninjaShoebox(max);
    //koro.ninjaRename(max);
    //max.takeDamage(25);
    //koro.ninjaRestore(loubouf);
    xolten.rangedAttack("koro");
    //xolten.beRepaired(50);
    //xolten.takeDamage(40);
    xolten.meleeAttack("max");
    //max.beRepaired(100);
    //xolten.vaulthunter_dot_exe("loubouf");
    //xolten.ninjaShoebox(max);
    //xolten.ninjaShoebox(max);
    //xolten.ninjaShoebox(max);
    //xolten.ninjaShoebox(max);
    //xolten.ninjaRename(xolten);
}