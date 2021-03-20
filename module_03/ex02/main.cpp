#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    srand (time(NULL));
    FragTrap max("max");
    ScavTrap loubouf("loubouf");

    max.vaulthunter_dot_exe("unpokemon");
    max.vaulthunter_dot_exe("unpokemon");
    max.vaulthunter_dot_exe("unpokemon");
    max.vaulthunter_dot_exe("unpokemon");
    max.vaulthunter_dot_exe("unpokemon");
    max.meleeAttack("drake");
    max.rangedAttack("drake");
    max.takeDamage(50);
    max.beRepaired(10);
    loubouf.meleeAttack("bifule");
    loubouf.rangedAttack("max");
    loubouf.takeDamage(10);
    loubouf.takeDamage(125);
    loubouf.beRepaired(50);
    loubouf.challengeNewcomer("unknown");
    loubouf.challengeNewcomer("unknown");
    loubouf.challengeNewcomer("unknown");
    loubouf.challengeNewcomer("unknown");
    loubouf.challengeNewcomer("unknown");
    
}