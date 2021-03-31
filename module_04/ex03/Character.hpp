#ifndef CHARACTER_HPP
#define CHARACTER_HPP
# include <iostream>
# include <cstring>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {

	public:
		Character();
		Character(std::string name);
		~Character();
		Character(const Character &copy);
		Character &operator=(const Character &copy);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private:
		AMateria *_inventory[4];
		int _size;
		std::string _name;
};


#endif
