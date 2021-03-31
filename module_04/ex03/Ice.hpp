#ifndef PISCINE_CPP_ICE_HPP
#define PISCINE_CPP_ICE_HPP
# include <iostream>

# include "AMateria.hpp"

class Ice : public AMateria {

	public:
		Ice();
		~Ice();
		Ice(const Ice &copy);
		Ice &operator=(const Ice &copy);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};


#endif
