#include "FragTrap.hpp"

int main()
{
    FragTrap max = FragTrap("max");

    max.vaulthunter_dot_exe("unpokemon");
    max.meleeAttack("drake");
    max.rangedAttack("drake");
    max.takeDamage(50);
    max.beRepaired(10);
}