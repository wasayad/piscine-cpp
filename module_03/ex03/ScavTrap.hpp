#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <time.h>
#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string n_name);
        ScavTrap(ScavTrap& copy);
        ~ScavTrap();
        ScavTrap&       operator=(ScavTrap& copy);
        void            challengeNewcomer(std::string const & target);
};

#endif