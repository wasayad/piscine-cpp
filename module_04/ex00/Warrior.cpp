#include "Warrior.hpp"


Warrior::Warrior(): Victim()
{
}

Warrior::Warrior(std::string n_name): Victim(n_name)
{
    std::cout<<"Zbloulkrog\n";
}

Warrior::Warrior(Warrior &copy): Victim()
{
    *this = copy;
    std::cout<<"Zboulkrog2\n";
}

Warrior::~Warrior()
{
    std::cout<<"*wind*...\n";
}

Warrior&        Warrior::operator=(Warrior &copy)
{
    name = copy.name;
    return (*this);
}

std::ostream&      operator<<(std::ostream& os, Warrior const& f)
{
    os << f.introduce();
    return (os);
}

void                Warrior::getPolymorphed()const
{
    std::cout<<name<< " has been turned into a gobelin!\n";
}