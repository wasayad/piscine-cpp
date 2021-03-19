#include "FragTrap.hpp"

FragTrap::FragTrap(std::string n_name): Hit_Points(100), 
Max_Hit_Points(100), Energy_points(100), Max_Energy_Points(100), Level(1), Name(n_name), Melee_Attack_Damage(30), Ranged_Attack_Damage(20),
Armor_Damage_Reduction(5)
{
    std::cout<<"42 electronics create : FR4G-TP "<< n_name<<std::endl;
}

FragTrap::~FragTrap()
{
    std::cout<<"42 electronics destroyed : FR4G-TP "<< Name <<std::endl;
}

void    FragTrap::rangedAttack(std::string const& target)
{
    std::cout<<"FR4G-TP "<< Name<< " attack " << target << " at range dealing "<< Ranged_Attack_Damage << " damage point !\n";
}

void    FragTrap::meleeAttack(std::string const& target)
{
    std::cout<<"FR4G-TP "<< Name<< " attack " << target << " at melee dealing "<< Melee_Attack_Damage << " damage point !\n";
}

void    FragTrap::takeDamage(unsigned int amount)
{
    if (Hit_Points - ((int)amount - Armor_Damage_Reduction) < 0)
    {
        Hit_Points = 0;
        std::cout<<"FR4G-TP "<< Name<< " take " << amount << " damage point ! Hp left: " << Hit_Points<<std::endl;
        std::cout<<"Error system\n";
    }
    else
    {
        Hit_Points = Hit_Points -  ((int)amount - Armor_Damage_Reduction);
        std::cout<<"FR4G-TP "<< Name<< " take " << amount << " damage point ! Hp left: " << Hit_Points<<std::endl;
    }
}

void    FragTrap::beRepaired(unsigned int amount)
{
    if (Hit_Points + (int)amount < Max_Hit_Points)
        Hit_Points = Hit_Points + (int)amount;
    else
        Hit_Points = 100;
    std::cout<<"FR4G-TP "<< Name<< " is restored of  " << amount << ", Hp after restore: " << Hit_Points<<std::endl;
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
            std::cout<< Name <<" ask "<< target<<" to play super smashbros, opponent lose his mental sanity\n"<<std::endl;
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