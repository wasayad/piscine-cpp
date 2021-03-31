# include "MateriaSource.hpp"
# include "Cure.hpp"
# include "Ice.hpp"
MateriaSource::MateriaSource() {
	std::memset(_learned, 0, 4);
	_size = 0;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < _size; i++) {
		delete _learned[i];
		_learned[i] = 0;
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	*this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy) {
	for (int i = 0; i < _size; i++) {
		delete _learned[i];
		_learned[i] = 0;
	}
	_size = copy._size;
	for (int i = 0; i < copy._size; i++) {
		_learned[i] = copy._learned[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *learn) {
	_learned[_size++] = learn;
}

AMateria * MateriaSource::createMateria(const std::string &type) {
	AMateria *tmp = NULL;
	if (!(type.compare("cure")))
		tmp = new Cure();
	else if (!(type.compare("ice")))
		tmp = new Ice();
	return (tmp);
}