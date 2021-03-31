#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <ostream>

class AWeapon
{
    public:
        AWeapon();
        AWeapon(std::string const &name, int apcost, int damage);
        AWeapon(AWeapon &copy);
        virtual ~AWeapon();
        AWeapon&            operator=(AWeapon &copy);
        std::string const   getName() const;
        int                 getAPCost() const;
        int                 getDamage() const;
        void                setName(std::string const name);
        void                setApCost(int const ap);
        void                setDamage(int const da);
        virtual void        attack() const = 0;
    private:
        std::string Name;
        int         Damage;
        int         Apcost;
};




#endif