#include "ScavTrap.hpp"

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
    if (Hit_Points - ((int)amount - Armor_Damage_Reduction) < 0)
    {
        Hit_Points = 0;
        std::cout<<"SC4V-TP "<< Name<< " take " << amount << " damage point ! Hp left: " << Hit_Points<<std::endl;
        std::cout<<"Error system\n";
    }
    else
    {
        Hit_Points = Hit_Points -  ((int)amount - Armor_Damage_Reduction);
        std::cout<<"SC4V-TP "<< Name<< " take " << amount << " damage point ! Hp left: " << Hit_Points<<std::endl;
    }
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    if (Hit_Points + (int)amount < Max_Hit_Points)
        Hit_Points = Hit_Points + (int)amount;
    else
        Hit_Points = 100;
    std::cout<<"SC4V-TP "<< Name<< " is restored of  " << amount << ", Hp after restore: " << Hit_Points<<std::endl;
}

void    ScavTrap::challengeNewcomer(std::string const & target)
{
    srand (time(NULL));
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
            std::cout<< Name <<" ask "<< target<<" to 1v1 him on chess.io\n"<<std::endl;
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