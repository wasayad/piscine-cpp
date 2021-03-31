#include "AMateria.hpp"

AMateria::AMateria() : _type("Default"), _xp(0) {}

AMateria::AMateria(const std::string &type) : _type(type), _xp(0) {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria &copy) {
	*this = copy;
}

const std::string & AMateria::getType() const { return _type; }

unsigned int AMateria::getXP() const { return _xp; }

AMateria & AMateria::operator=(const AMateria &copy) {
	this->setType(copy._type);
	this->setXP(copy._xp);
	return *this;
}

void AMateria::setType(std::string type) {
	_type = type;
}

void AMateria::setXP(unsigned int xp) {
	_xp = xp;
}

void AMateria::use(ICharacter &target) {
	static_cast<void>(target);
	_xp += 10;
}