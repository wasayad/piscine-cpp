#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <ostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:
        RadScorpion();
        RadScorpion(RadScorpion &copy);
        ~RadScorpion();
        RadScorpion&            operator=(RadScorpion &copy);
};




#endif