#ifndef Enemy_HPP
#define Enemy_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <ostream>

class Enemy
{
    public:
        Enemy();
        Enemy(int hp, std::string const &type);
        Enemy(Enemy &copy);
        ~Enemy();
        Enemy&            operator=(Enemy &copy);
        std::string const   getType() const;
        int                 getHp() const;
        virtual void        takeDamage(int amount);
    private:
        std::string Type;
        int         Hp;
};




#endif