#ifndef LASERGUN_HPP
#define LASERGUN_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <ostream>
#include "AWeapon.hpp"

class LaserGun : public AWeapon
{
    public:
        LaserGun();
        LaserGun(LaserGun &copy);
        virtual ~LaserGun();
        LaserGun&    operator=(LaserGun &copy);
        void    attack() const;
};




#endif