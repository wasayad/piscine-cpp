#include "Victim.hpp"


Victim::Victim()
{
}

Victim::Victim(std::string n_name): name(n_name)
{
    std::cout<<"Some random victim called "<< name << " just appeared!\n";
}

Victim::Victim(Victim &copy)
{
    *this = copy;
    std::cout<<"Some random victim called "<< name << " just reappeared!\n";
}

Victim::~Victim()
{
    std::cout<<"Victim "<< name << " just died no apparent reason!\n";
}

const std::string        Victim::introduce() const
{   std::string intro;
    intro.append("I'm ");
    intro.append(name);
    intro.append(" and I like otters!\n");
    return (intro);
}

Victim&        Victim::operator=(Victim &copy)
{
    name = copy.name;
    return (*this);
}

std::ostream&      operator<<(std::ostream& os, Victim const& f)
{
    os << f.introduce();
    return (os);
}

void                Victim::getPolymorphed()const
{
    std::cout<<name<< " has been turned into a cute little sheep!\n";
}