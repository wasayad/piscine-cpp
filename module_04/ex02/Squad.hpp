#ifndef SQUAD_HPP
#define SQUAD_HPP
#include "ISquad.hpp"

class Squad : public ISquad {
	private:
		int _count;
		struct list
		{
			ISpaceMarine* _unit;
			list* _next;
		};
		list*  _first;
	public:
		Squad();
		Squad(const Squad & copy);
		Squad & operator=(const Squad & op);
		virtual ~Squad();

		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int n) const;
		virtual int push(ISpaceMarine* new_unit);
};

#endif
