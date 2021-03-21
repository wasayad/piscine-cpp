#include "RadScorpion.hpp"


RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
    std::cout<< "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
    std::cout<<"* SPROTCH *\n";
}

RadScorpion::RadScorpion(RadScorpion & copy)
{
    *this = copy;
}

RadScorpion&     RadScorpion::operator=(RadScorpion & copy)
{
    copy.getHp();
    return (*this);
}

