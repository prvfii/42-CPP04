#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
class WrongAnimal
{
protected:
		std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal & other);
	WrongAnimal &operator=(const WrongAnimal & other);
	virtual ~WrongAnimal();
	virtual void	makeSound(void) const;
	virtual std::string	getType(void) const;
};
#endif