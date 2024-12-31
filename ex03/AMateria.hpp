#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "Character.hpp"

class AMateria
{
  protected:
			std::string type;
  public:
	AMateria();
	~AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria & other);
	AMateria& operator=(const AMateria & other);
	std::string const &getType() const; // Returns the materia type
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif