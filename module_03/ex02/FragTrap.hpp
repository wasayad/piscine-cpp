#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <time.h>
#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string n_name);
        ~FragTrap();
        void            vaulthunter_dot_exe(std::string const & target);
};

#endif