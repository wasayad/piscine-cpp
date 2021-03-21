#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Peon.hpp"
#include <string>
#include <iostream>
#include <cctype>
#include <ostream>
#include "Victim.hpp"
#include "Warrior.hpp"

class Sorcerer
{
    public:
        Sorcerer();
        Sorcerer(std::string n_name, std::string n_title);
        Sorcerer(Sorcerer &copy);
        ~Sorcerer();
        Sorcerer&    operator=(Sorcerer &copy);
        const std::string    introduce() const;
        void    polymorph(Victim const& target);
        void    polymorph(Peon const& target);
        void    polymorph(Warrior const& target);
    private:
        std::string name;
        std::string title;
};


std::ostream&      operator<<(std::ostream& os, Sorcerer const& f);

#endif