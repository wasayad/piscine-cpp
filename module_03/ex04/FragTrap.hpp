#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <time.h>
#include "ClapTrap.hpp"

class   FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string n_name);
        FragTrap(FragTrap& copy);
        ~FragTrap();
        FragTrap&       operator=(FragTrap& copy);
        void            vaulthunter_dot_exe(std::string const & target);
        void            rangedAttack(std::string const& target);
        void            meleeAttack(std::string const& target);
};

#endif