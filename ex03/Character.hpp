
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		AMateria *inventory[4];
		std::string name;
		int idx;
	public:
		Character(std::string const & name); //constructor
		~Character( void ); //destructor
		Character(const Character& obj); //copy constructor
		Character& operator=(const Character& obj); //copy assignment operator overload

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif