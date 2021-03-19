#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string n_name): ClapTrap(n_name, 100, 100, 50, 50, 20, 15, 3)
{
    std::cout<<"42 electronics create : SC4V-TP "<< n_name<<std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout<<"42 electronics destroyed : SC4V-TP "<< Name <<std::endl;
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