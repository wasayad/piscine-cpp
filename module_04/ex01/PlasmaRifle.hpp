#ifndef PlASMARIFLE_HPP
#define PlASMARIFLE_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <ostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle();
        PlasmaRifle(PlasmaRifle &copy);
        ~PlasmaRifle();
        PlasmaRifle&    operator=(PlasmaRifle &copy);
        void    attack() const;
};




#endif