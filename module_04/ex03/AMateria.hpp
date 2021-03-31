#ifndef AMATERIA_HPP
#define AMATERIA_HPP
# include <iostream>

class ICharacter;

class AMateria {

	public:
		AMateria();
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(const AMateria &copy);
		AMateria &operator=(const AMateria &copy);

		std::string const & getType() const;
		unsigned int getXP() const;

		void setType(std::string const type);
		void setXP(unsigned int xp);

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	private:
		std::string _type;
		unsigned int _xp;
};

# include "ICharacter.hpp"

#endif
