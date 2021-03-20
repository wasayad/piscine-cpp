#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <time.h>
#include "ClapTrap.hpp"

class   NinjaTrap : virtual public ClapTrap
{
    public:
        NinjaTrap();
        NinjaTrap(std::string n_name);
        ~NinjaTrap();
        void            ninjaShoebox(ClapTrap & target);
        void            ninjaRestore(ClapTrap & target);
        void            ninjaRename(ClapTrap & target);
        void            meleeAttack(std::string const& target);
};

#endif