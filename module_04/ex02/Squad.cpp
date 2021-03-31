#include "Squad.hpp"

Squad::Squad() {
	_count = 0;
	_first = NULL;
}

Squad::~Squad() {
	while (_first)
	{
		list *tmp = _first->_next;
		delete _first->_unit;
		delete _first;
		_first = tmp;
	}
}

Squad::Squad(const Squad &copy) {
	*this = copy;
}

Squad & Squad::operator=(const Squad &copy) {
	for (int i = 0; i < _count; i++) {
		list *tmp = _first->_next;
		delete _first->_unit;
		delete _first;
		_first = tmp;
	}
	_count = 0;
	list *tmp = copy._first;
	for (int i = 0; i < copy._count; i++) {
		tmp->_unit->battleCry();
		push(tmp->_unit->clone());
		tmp = tmp->_next;
	}
	return *this;
}

int Squad::getCount() const { return _count; }

ISpaceMarine * Squad::getUnit(int n) const{
	int	i = 0;
	list *tmp = _first;
	if (n > _count || n < 0)
		return NULL;
	while (i < n)
	{
		tmp = tmp->_next;
		i++;
	}
	return tmp->_unit;
}

int Squad::push(ISpaceMarine *new_unit) {
	_count++;
	if (_count == 1)
	{
		_first = new list;
		_first->_unit = new_unit;
		_first->_next = NULL;
	}
	else
	{
		list* next;
		next = _first;
		while (next->_next != NULL)
			next = next->_next;
		next->_next = new list;
		next = next->_next;
		next->_unit = new_unit;
		next->_next = NULL;
	}
	return _count;
}