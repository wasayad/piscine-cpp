#include "Character.hpp"

Character::Character() {
	std::memset(_inventory, 0, 4);
	_size = 0;
	_name = "Default";
}

Character::Character(std::string name) {
	std::memset(_inventory, 0, 4);
	_size = 0;
	_name = name;
}

Character::~Character() {
	for (int i = 0; i < _size; i++) {
		delete _inventory[i];
		_inventory[i] = 0;
	}
}

Character::Character(const Character &copy) {
	*this = copy;
}

Character &Character::operator=(const Character &copy) {
	_name = copy._name;
	for (int i = 0; i < _size; i++) {
		delete _inventory[i];
		_inventory[i] = 0;
	}
	_size = copy._size;
	for (int i = 0; i < copy._size; i++) {
		_inventory[i] = copy._inventory[i]->clone();
	}
	return *this;
}

void Character::equip(AMateria* m) {
	if (_size < 4) _inventory[_size++] = m;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < _size) {
		_inventory[idx] = 0;
		_size--;
	}
}

const std::string & Character::getName() const { return _name; }

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < _size)
		_inventory[idx]->use(target);
}