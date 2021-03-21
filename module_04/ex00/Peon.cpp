#include "Peon.hpp"


Peon::Peon(): Victim()
{
}

Peon::Peon(std::string n_name): Victim(n_name)
{
    std::cout<<"Zog Zog\n";
}

Peon::Peon(Peon &copy): Victim()
{
    *this = copy;
    std::cout<<"Zog Zog2\n";
}

Peon::~Peon()
{
    std::cout<<"Bleuark...\n";
}

Peon&        Peon::operator=(Peon &copy)
{
    name = copy.name;
    return (*this);
}

std::ostream&      operator<<(std::ostream& os, Peon const& f)
{
    os << f.introduce();
    return (os);
}

void                Peon::getPolymorphed()const
{
    std::cout<<name<< " has been turned into a pink pony!\n";
}