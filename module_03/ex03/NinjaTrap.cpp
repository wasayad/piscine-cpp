#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

NinjaTrap::NinjaTrap(): ClapTrap("empty", 60, 60, 120, 120, 60, 5, 0)
{
    
}

NinjaTrap::NinjaTrap(std::string n_name): ClapTrap(n_name, 60, 60, 120, 120, 60, 5, 0)
{
    std::cout<<"42 electronics create : N4PC-TP "<< n_name<<std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout<<"42 electronics destroyed : N4PC-TP "<< Name <<std::endl;
}


NinjaTrap::NinjaTrap(NinjaTrap& copy): ClapTrap("empty", 100, 100, 100, 100, 30, 20, 5)
{
    *this = copy;
}

NinjaTrap&       NinjaTrap::operator=(NinjaTrap& copy)
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
    std::cout<<"42 electronics copying an old NinjaTrap to a new one\n";
    return *this;
}

void    NinjaTrap::ninjaShoebox(ClapTrap & target)
{
    target.setHp(15);
    std::cout<< Name << " throw a shoebox at ClapTrap"<< target.getName() << " dealing 15 damage\n";
}

void    NinjaTrap::ninjaShoebox(ScavTrap & target)
{
    target.setHp(15);
    std::cout<< Name << " throw a shoebox at ScavTrap"<< target.getName() << " dealing 15 damage ";
    std::cout<< target.getName() << " got : " << target.getHp() << " Hp left\n";
}

void    NinjaTrap::ninjaShoebox(FragTrap & target)
{
    target.setHp(15);
    std::cout<< Name << " throw a shoebox at FragTrap"<< target.getName() << " dealing 15 damage ";
    std::cout<< target.getName() << " got : " << target.getHp() << " Hp left\n";
}

void    NinjaTrap::ninjaShoebox(NinjaTrap & target)
{
    target.setHp(15);
    std::cout<< Name << " throw a shoebox at NinjaTrap"<< target.getName() << " dealing 15 damage ";
    std::cout<< target.getName() << " got : " << target.getHp() << " Hp left\n";
}
