#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice &copy) : AMateria(copy) {}

Ice &Ice::operator=(const Ice &copy) {
	this->setType(copy.getType());
	this->setXP(copy.getXP());
	return *this;
}

AMateria * Ice::clone() const {
	return new Ice;
}

void Ice::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}