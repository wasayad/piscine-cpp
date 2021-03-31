#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{

public:
    SuperTrap();
    SuperTrap(std::string n_name);
    SuperTrap(SuperTrap& copy);
    ~SuperTrap();
    SuperTrap&      operator=(SuperTrap& copy);
    void            setVar(std::string n_name);
    void            meleeAttack(std::string const& target);
    void            rangedAttack(std::string const& target);
};

#endif