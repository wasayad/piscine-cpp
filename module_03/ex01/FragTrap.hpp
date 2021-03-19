#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <time.h>

class   FragTrap
{
    public:
        FragTrap(std::string n_name);
        ~FragTrap();
        void            rangedAttack(std::string const& target);
        void            meleeAttack(std::string const& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        void            vaulthunter_dot_exe(std::string const & target);
    private:
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