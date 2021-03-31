#ifndef PEON_HPP
#define PEON_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <ostream>
#include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon(std::string n_name);
        Peon(Peon &copy);
        virtual ~Peon();
        Peon&               operator=(Peon &copy);
        void                 getPolymorphed()const;
    private:
        Peon();
};

std::ostream&      operator<<(std::ostream& os, Peon const& f);

#endif