#include "SuperTrap.hpp"

SuperTrap::SuperTrap(): ClapTrap("Default", 100, 100, 120, 120, 60, 20, 5), FragTrap("default"),NinjaTrap("default")
{

}

SuperTrap::SuperTrap(std::string n_name): ClapTrap("Default", 0, 0, 0, 0, 0, 0, 0), FragTrap(n_name),NinjaTrap(n_name)
{
    setVar(n_name);
    std::cout<<"42 electronics create : SuperTrap "<<std::endl;
}


void        SuperTrap::setVar(std::string n_name)
{
    Hit_Points = 100;
    Max_Hit_Points = 100;
    Energy_points = 120;
    Max_Energy_Points = 120;
    Level = 1;
    Name = n_name;
    Melee_Attack_Damage = 60;
    Ranged_Attack_Damage = 20;
    Armor_Damage_Reduction = 5;
}

SuperTrap::~SuperTrap()
{
    std::cout<<"42 electronics destroyed : SuperTrap "<<std::endl;
}

SuperTrap::SuperTrap(SuperTrap& copy):ClapTrap("Default", 0, 0, 0, 0, 0, 0, 0), FragTrap("empty"),NinjaTrap("n_name")
{
    *this = copy;
}

SuperTrap&       SuperTrap::operator=(SuperTrap& copy) 
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
    std::cout<<"42 electronics copying an old SuperTrap to a new one\n";
    return *this;
}

void            SuperTrap::meleeAttack(std::string const& target)
{
    NinjaTrap::meleeAttack(target);
}

void            SuperTrap::rangedAttack(std::string const& target)
{
    FragTrap::rangedAttack(target);
}