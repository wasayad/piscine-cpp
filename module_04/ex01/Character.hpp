#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <ostream>
class Character 
{
    private:
        std::string name;
    protected:
        int     AP;
        AWeapon *Weapon;
    public:
        Character();
        Character(std::string n_name);
        Character(const Character & copy);
        Character & operator=(const Character & op);   
        ~Character();
        void    RecoverAP();
        void    equip(AWeapon *weapon);
        void    attack(Enemy *enemy);
        std::string const getName() const;
        int         getAp() const;
        AWeapon const*    getWeapon() const;
        std::string const    getWeaponType() const;
};
std::ostream&      operator<<(std::ostream& os, Character const& f);

#endif