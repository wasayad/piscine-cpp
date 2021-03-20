#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
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

void    NinjaTrap::ninjaShoebox(ClapTrap & target)
{
    target.setHp(-15);
    std::cout<< Name << " throw a shoebox at "<< target.getName() << " dealing 15 damage ";
    std::cout<< target.getName() << " got : " << target.getHp() << " Hp left\n";
}

void    NinjaTrap::ninjaRestore(ClapTrap & target)
{
    target.setEnergy(25);
    std::cout<< Name << " using change the energy of "<< target.getName()<< std::endl;
}

void    NinjaTrap::ninjaRename(ClapTrap & target)
{
    target.setName("NinjaSoldier");
    std::cout<< Name << " use the develloper power to rename his oppenent to NinjaSoldier\n";
}

void    NinjaTrap::meleeAttack(std::string const& target)
{
    (void)target;
    std::cout<<"attacking from ninja class "<< target <<std::endl;
}