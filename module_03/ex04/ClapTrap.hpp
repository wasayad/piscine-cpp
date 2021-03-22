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
        ClapTrap(ClapTrap& copy);
        ~ClapTrap();
        ClapTrap&       operator=(ClapTrap& copy);
        void            rangedAttack(std::string const& target);
        void            meleeAttack(std::string const& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        void            setName(std::string n_name);
        void            setHp(int n_hp);
        void            setEnergy(int mana);
        std::string     getName();
        int             getHp();
        int             getMaxEnergy();
    protected:
        unsigned int             Hit_Points;
        unsigned int             Max_Hit_Points;
        unsigned int             Energy_points;
        unsigned int             Max_Energy_Points;
        unsigned int             Level;
        std::string             Name;
        unsigned int             Melee_Attack_Damage;
        unsigned int             Ranged_Attack_Damage;
        unsigned int             Armor_Damage_Reduction;
    private:
            ClapTrap();
};

#endif