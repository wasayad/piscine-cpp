#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <time.h>

class   ClapTrap
{
    public:
        ClapTrap(std::string n_name, int hp, int mhp, int mana, int mmana, int ad, int adr, int armor);
        ~ClapTrap();
        void            rangedAttack(std::string const& target);
        void            meleeAttack(std::string const& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
    protected:
        int             Hit_Points;
        const int       Max_Hit_Points;
        int             Energy_points;
        int             Max_Energy_Points;
        int             Level;
        std::string     Name;
        int             Melee_Attack_Damage;
        int             Ranged_Attack_Damage;
        int             Armor_Damage_Reduction;
};

#endif