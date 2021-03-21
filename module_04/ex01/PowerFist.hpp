#ifndef PowerFist_HPP
#define PowerFist_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <ostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
        PowerFist();
        PowerFist(PowerFist &copy);
        virtual ~PowerFist();
        PowerFist&           operator=(PowerFist &copy);
        void            attack() const;
};




#endif