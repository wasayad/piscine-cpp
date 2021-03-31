#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
# include <iostream>

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &copy);
		MateriaSource &operator=(const MateriaSource &copy);

		virtual void learnMateria(AMateria *learn);
		virtual AMateria* createMateria(std::string const & type);

	private:
		AMateria *_learned[4];
		int _size;
};


#endif
