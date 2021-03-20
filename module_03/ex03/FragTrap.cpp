#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    
}

FragTrap::FragTrap(std::string n_name): ClapTrap(n_name, 100, 100, 100, 100, 30, 20, 5)
{
    std::cout<<"42 electronics create : FR4G-TP "<< n_name<<std::endl;
}

FragTrap::~FragTrap()
{
    std::cout<<"42 electronics destroyed : FR4G-TP "<< Name <<std::endl;
}

FragTrap::FragTrap(FragTrap& copy): ClapTrap("empty", 100, 100, 100, 100, 30, 20, 5)
{
    *this = copy;
}

FragTrap&       FragTrap::operator=(FragTrap& copy)
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

void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    srand (time(NULL));
    int iSecret = rand() % 5;
    if (Energy_points > 0)
    {
        if (iSecret == 0)
            std::cout<<"Le robot viens d'utiliser une magnifique faculte de traduction pour de la vf de qualité ce qui étourdit "<< target<<std::endl;
        else if (iSecret == 1)
            std::cout<< Name <<" reduce backhole of "<< target<<" by 365 days"<<std::endl;
        else if (iSecret == 2)
            std::cout<< Name <<" summon akerdeka to fight for him : "<< target<<" take 0 damage"<<std::endl;
        else if (iSecret == 3)
            std::cout<< Name <<" ask "<< target<<" to play super smashbros, opponent lose his mental sanity"<<std::endl;
        else if (iSecret == 4)
        {
            std::cout<< Name << " evolve due to an invalid hardware instruction : "<< target << " is lost in an infinite segfault\n";
            Level++;
        }
        Energy_points = Energy_points - 25;
    }
    else
    {
        std::cout<<"No energy left\n";
    }
}
