#include "FragTrap.hpp"

int main()
{
    srand (time(NULL));
    FragTrap max("max");
    FragTrap test("test");
    test.meleeAttack("pokenon");
    max.vaulthunter_dot_exe("unpokemon");
    max.vaulthunter_dot_exe("unpokemon");
    max.vaulthunter_dot_exe("unpokemon");
    max.vaulthunter_dot_exe("unpokemon");
    max.vaulthunter_dot_exe("unpokemon");
    max.vaulthunter_dot_exe("unpokemon");
    max.vaulthunter_dot_exe("unpokemon");
    max.meleeAttack("drake");
    max.rangedAttack("drake");
    max.takeDamage(50);
    max.takeDamage(500000);
    max.beRepaired(10);
}