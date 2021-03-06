#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout<<"42 electronics create : ClapTrap "<<std::endl;
}

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

ClapTrap::ClapTrap(ClapTrap& copy)
{
    *this = copy;
}

ClapTrap&       ClapTrap::operator=(ClapTrap& copy)
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
    if (Hit_Points < (amount - Armor_Damage_Reduction))
    {
        Hit_Points = 0;
        std::cout<<"ClapTrap "<< Name<< " take " << amount << " damage point ! Hp left: " << Hit_Points<<std::endl;
        std::cout<<"Error system\n";
    }
    else
    {
        Hit_Points = Hit_Points -  (amount - Armor_Damage_Reduction);
        std::cout<<"ClapTrap "<< Name<< " take " << amount << " damage point ! Hp left: " << Hit_Points<<std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit_Points + amount < Max_Hit_Points)
        Hit_Points = Hit_Points + amount;
    else
        Hit_Points = 100;
    std::cout<<"ClapTrap "<< Name<< " is restored of  " << amount << ", Hp after restore: " << Hit_Points<<std::endl;
}

void    ClapTrap::setHp(int n_np)
{
    if (Hit_Points  < (n_np + Armor_Damage_Reduction))
        Hit_Points = 0;
    else if (!(Hit_Points + (n_np + Armor_Damage_Reduction) > Max_Hit_Points))
        Hit_Points += (n_np + Armor_Damage_Reduction);
}

void    ClapTrap::setName(std::string n_name)
{
    Name = n_name;
}

void    ClapTrap::setEnergy(int mana)
{
    if (Energy_points + mana > Max_Energy_Points)
    {

    }
    else if (mana < 0)
    {

    }
    else
        Energy_points += mana;
}

std::string  ClapTrap::getName()
{
    return (Name);
}

int         ClapTrap::getHp()
{
    return (Hit_Points);
}

int         ClapTrap::getMaxEnergy()
{
    return (Max_Energy_Points);
}
