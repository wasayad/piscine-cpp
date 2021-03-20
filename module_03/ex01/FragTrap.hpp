#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <time.h>

class   FragTrap
{
    public:
        FragTrap();
        FragTrap(std::string n_name);
        FragTrap(FragTrap& copy);
        ~FragTrap();
        FragTrap&       operator=(FragTrap& copy);
        void            rangedAttack(std::string const& target);
        void            meleeAttack(std::string const& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        void            vaulthunter_dot_exe(std::string const & target);
    private:
        unsigned int             Hit_Points;
        unsigned int             Max_Hit_Points;
        unsigned int             Energy_points;
        unsigned int             Max_Energy_Points;
        unsigned int             Level;
        std::string              Name;
        unsigned int             Melee_Attack_Damage;
        unsigned int             Ranged_Attack_Damage;
        unsigned int             Armor_Damage_Reduction;
};

#endif