#include "Boss.hpp"


Boss::Boss() : Enemy(800, "Boss")
{
    std::cout<< "* You'll die *\n";
}

Boss::~Boss()
{
    std::cout<<"* Argh...I'll come back! *\n";
}

Boss::Boss(Boss & copy)
{
    *this = copy;
}

Boss&     Boss::operator=(Boss & copy)
{
    setHp(copy.getHp());
    setType(copy.getType());
    return (*this);
}

