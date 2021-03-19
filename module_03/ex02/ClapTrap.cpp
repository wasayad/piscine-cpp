#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string n_name, int hp, int mhp, int mana, int mmana, int ad, int adr, int armor): Hit_Points(hp), 
Max_Hit_Points(mhp), Energy_points(mana), Max_Energy_Points(mmana),Level(1), Name(n_name), Melee_Attack_Damage(ad), Ranged_Attack_Damage(adr),
Armor_Damage_Reduction(armor)
{
    std::cout<<"42 electronics create : ClapTrap "<< n_name<<std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"42 electronics destroyed : ClapTrap "<< Name <<std::endl;
}

void    ClapTrap::rangedAttack(std::string const& target)
{
    std::cout<<"ClapTrap "<< Name<< " attack " << target << " at range dealing "<< Ranged_Attack_Damage << " damage point !\n";
}

void    ClapTrap::meleeAttack(std::string const& target)
{
    std::cout<<"ClapTrap "<< Name<< " attack " << target << " at melee dealing "<< Melee_Attack_Damage << " damage point !\n";
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_Points - ((int)amount - Armor_Damage_Reduction) < 0)
    {
        Hit_Points = 0;
        std::cout<<"ClapTrap "<< Name<< " take " << amount << " damage point ! Hp left: " << Hit_Points<<std::endl;
        std::cout<<"Error system\n";
    }
    else
    {
        Hit_Points = Hit_Points -  ((int)amount - Armor_Damage_Reduction);
        std::cout<<"ClapTrap "<< Name<< " take " << amount << " damage point ! Hp left: " << Hit_Points<<std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit_Points + (int)amount < Max_Hit_Points)
        Hit_Points = Hit_Points + (int)amount;
    else
        Hit_Points = 100;
    std::cout<<"ClapTrap "<< Name<< " is restored of  " << amount << ", Hp after restore: " << Hit_Points<<std::endl;
}
