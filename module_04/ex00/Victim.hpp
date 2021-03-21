#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <ostream>

class Victim
{
    public:
        Victim();
        Victim(std::string n_name);
        Victim(Victim &copy);
        ~Victim();
        Victim&    operator=(Victim &copy);
        const std::string    introduce()const;
        void                 getPolymorphed()const;
    protected:
        std::string name;
};

std::ostream&      operator<<(std::ostream& os, Victim const& f);

#endif