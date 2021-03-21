#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <ostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        SuperMutant();
        SuperMutant(SuperMutant &copy);
        ~SuperMutant();
        SuperMutant&            operator=(SuperMutant &copy);
        void                    takeDamage(int amount);
};




#endif