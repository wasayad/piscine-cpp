#ifndef BOSS_HPP
#define BOSS_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <ostream>
#include "Enemy.hpp"

class Boss : public Enemy
{
    public:
        Boss();
        Boss(Boss &copy);
        virtual ~Boss();
        Boss&            operator=(Boss &copy);
};




#endif