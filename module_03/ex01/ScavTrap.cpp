#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{

}

ScavTrap::ScavTrap(std::string n_name): Hit_Points(100), 
Max_Hit_Points(100), Energy_points(50), Max_Energy_Points(50), Level(1), Name(n_name), Melee_Attack_Damage(20), Ranged_Attack_Damage(15),
Armor_Damage_Reduction(3)
{
    std::cout<<"42 electronics create : SC4V-TP "<< n_name<<std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout<<"42 electronics destroyed : SC4V-TP "<< Name <<std::endl;
}

ScavTrap::ScavTrap(ScavTrap& copy)
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


void    ScavTrap::rangedAttack(std::string const& target)
{
    std::cout<<"SC4V-TP "<< Name<< " attack " << target << " at range dealing "<< Ranged_Attack_Damage << " damage point !\n";
}

void    ScavTrap::meleeAttack(std::string const& target)
{
    std::cout<<"SC4V-TP "<< Name<< " attack " << target << " at melee dealing "<< Melee_Attack_Damage << " damage point !\n";
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    if (Hit_Points < (amount - Armor_Damage_Reduction))
    {
        Hit_Points = 0;
        std::cout<<"SC4V-TP "<< Name<< " take " << amount << " damage point ! Hp left: " << Hit_Points<<std::endl;
        std::cout<<"Error system\n";
    }
    else
    {
        Hit_Points = Hit_Points -  (amount - Armor_Damage_Reduction);
        std::cout<<"SC4V-TP "<< Name<< " take " << amount << " damage point ! Hp left: " << Hit_Points<<std::endl;
    }
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    if (Hit_Points + amount < Max_Hit_Points)
        Hit_Points = Hit_Points + amount;
    else
        Hit_Points = 100;
    std::cout<<"SC4V-TP "<< Name<< " is restored of  " << amount << ", Hp after restore: " << Hit_Points<<std::endl;
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