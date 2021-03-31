#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("default", 100, 100, 50, 50, 20, 15, 3)
{
    
}

ScavTrap::ScavTrap(std::string n_name): ClapTrap(n_name, 100, 100, 50, 50, 20, 15, 3)
{
    std::cout<<"42 electronics create : SC4V-TP "<< n_name<<std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout<<"42 electronics destroyed : SC4V-TP "<< Name <<std::endl;
}

ScavTrap::ScavTrap(ScavTrap& copy): ClapTrap("empty", 100, 100, 50, 50, 20, 15, 3)
{
    *this = copy;
}

ScavTrap&       ScavTrap::operator=(ScavTrap& copy)
{
    Hit_Points = copy.Hit_Points;
    Max_Hit_Points = copy.Max_Hit_Points;
    Energy_points = copy.Energy_points;
    Max_Energy_Points = copy.Max_Energy_Points;
    Level = copy.Level;
    Name = copy.Name;
    Melee_Attack_Damage = copy.Melee_Attack_Damage;
    Ranged_Attack_Damage = copy.Ranged_Attack_Damage;
    Armor_Damage_Reduction = copy.Armor_Damage_Reduction;
    std::cout<<"42 electronics copying an old ClapTrap to a new one\n";
    return *this;
}

void    ScavTrap::challengeNewcomer(std::string const & target)
{
    int iSecret = rand() % 5;
    if (Energy_points > 0)
    {
        if (iSecret == 0)
            std::cout<<Name<<" challenge "<< target<<" to fix a segfault"<<std::endl;
        else if (iSecret == 1)
            std::cout<< Name <<" challenge "<< target<<" to create a proper makefile"<<std::endl;
        else if (iSecret == 2)
            std::cout<< Name <<" challenge "<< target<<" to avoid taking a break while sitting next to coscialp"<<std::endl;
        else if (iSecret == 3)
            std::cout<< Name <<" ask "<< target<<" to 1v1 him on chess.io"<<std::endl;
        else if (iSecret == 4)
        {
            std::cout<< Name << " evolve due to a memory overflow : "<< target << " is lost in an invalid free\n";
            Level++;
        }
        Energy_points = Energy_points - 25;
    }
    else
    {
        std::cout<<"No energy left\n";
    }

}

void            ScavTrap::rangedAttack(std::string const& target)
{
    std::cout<<"ranged attack from ScavTrap class to "<< target <<std::endl;
}

void    ScavTrap::meleeAttack(std::string const& target)
{
    std::cout<<"melee attack from ScavTrap class to "<< target <<std::endl;
}
