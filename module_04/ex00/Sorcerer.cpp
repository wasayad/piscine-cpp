#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Warrior.hpp"
Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(std::string n_name, std::string n_title): name(n_name), title(n_title)
{
    std::cout<< name << ", " << title<< ", is born!\n";
}

Sorcerer::Sorcerer(Sorcerer &copy)
{
    *this = copy;
    std::cout<< name << ", " << title<< ", is reborn!\n";
}

Sorcerer::~Sorcerer()
{
    std::cout<< name << ", " << title<< ", is dead. Consequence will never be the same!\n";
}

const std::string        Sorcerer::introduce() const
{   std::string intro;
    intro.append("I am ");
    intro.append(name);
    intro.append(", ");
    intro.append(title);
    intro.append(", and i like ponies!\n");
    return (intro);
}

Sorcerer&        Sorcerer::operator=(Sorcerer &copy)
{
    name = copy.name;
    title = copy.title;
    return (*this);
}

std::ostream&      operator<<(std::ostream& os, Sorcerer const& f)
{
    os << f.introduce();
    return (os);
}


void       Sorcerer::polymorph(Victim const& target)
{
    target.getPolymorphed();
}

void       Sorcerer::polymorph(Peon const& target)
{
    target.getPolymorphed();
}

void        Sorcerer::polymorph(Warrior const& target)
{
    target.getPolymorphed();
}