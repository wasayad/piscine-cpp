#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

#include "stdio.h"
int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	std::cout << "-------------------------------------\n";
	ISpaceMarine* akerdeka = new TacticalMarine;
	ISpaceMarine* coscialp = new AssaultTerminator;
	Squad t1;
	Squad t2;
	t1.push(coscialp);
	t1.push(akerdeka);
	t2 = t1;
	for (int i = 0; i < t2.getCount(); ++i)
	{
		ISpaceMarine* cur = t2.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	return 0;
}