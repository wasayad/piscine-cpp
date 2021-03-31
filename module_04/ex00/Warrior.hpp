#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <ostream>
#include "Victim.hpp"

class Warrior : public Victim
{
    public:
        Warrior(std::string n_name);
        Warrior(Warrior &copy);
        virtual ~Warrior();
        Warrior&    operator=(Warrior &copy);
        void                 getPolymorphed()const;
    private:
        Warrior();
};

std::ostream&      operator<<(std::ostream& os, Warrior const& f);

#endif