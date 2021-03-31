#include "Enemy.hpp"


Enemy::Enemy()
{
    Type = "Default";
    Hp = 100;
}

Enemy::~Enemy()
{
    Hp = 0;
}


Enemy::Enemy(Enemy & copy)
{
    *this = copy;
}

Enemy::Enemy(int hp, std::string const & type): Type(type), Hp(hp)
{

}

Enemy&     Enemy::operator=(Enemy & copy)
{
    Type = copy.Type;
    Hp = copy.Hp;
    return (*this);
}

std::string const Enemy::getType() const
{
    return (Type);
}

int         Enemy::getHp() const
{
    return (Hp);
}

void        Enemy::takeDamage(int amount)
{
    if (amount < 0)
    {

    }
    else if (Hp - amount < 0)
    {
        Hp = 0;
    }
    else
    {
        Hp = Hp - amount;
    }
}

void        Enemy::setHp(int const hp)
{
    Hp = hp;
}

void        Enemy::setType(std::string const type)
{
    Type = type;
}