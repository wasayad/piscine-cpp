#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP
#include <string>
#include <iostream>
#include <cctype>
#include <time.h>
#include "ISpaceMarine.hpp"
class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        TacticalMarine(const TacticalMarine & copy);
        TacticalMarine & operator=(const TacticalMarine & op);
        virtual ~TacticalMarine();

        void    battleCry() const;
        void    rangedAttack() const;
        void    meleeAttack() const;
		ISpaceMarine*  clone() const;
};



#endif