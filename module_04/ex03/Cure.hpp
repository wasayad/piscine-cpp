#ifndef PISCINE_CPP_CURE_HPP
#define PISCINE_CPP_CURE_HPP
# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria {

	public:
		Cure();
		~Cure();
		Cure(const Cure &copy);
		Cure &operator=(const Cure &copy);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};


#endif
