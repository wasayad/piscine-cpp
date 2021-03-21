#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Warrior.hpp"
int main()
{
Sorcerer robert("Robert", "the Magnificent");
Victim jim("Jimmy");
Peon joe("Joe");
Warrior bill("Bill");

std::cout << robert << jim << joe << bill;
robert.polymorph(jim);
robert.polymorph(joe);
robert.polymorph(bill);
return 0;
}