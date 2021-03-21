#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
