#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <time.h>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
class   NinjaTrap : virtual public ClapTrap
{
    public:
        NinjaTrap();
        NinjaTrap(std::string n_name);
        ~NinjaTrap();
        NinjaTrap(NinjaTrap &copy);
        NinjaTrap&   operator=(NinjaTrap &copy);
        void            ninjaShoebox(ClapTrap & target);
        void            ninjaShoebox(ScavTrap & target);
        void            ninjaShoebox(FragTrap & target);
        void            ninjaShoebox(NinjaTrap & target);
};

#endif