#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP
#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine {
	public:
		AssaultTerminator();
		virtual ~AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &copy);
		AssaultTerminator &operator=(const AssaultTerminator &copy);

		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};


#endif
