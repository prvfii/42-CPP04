#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure constructor is called. " << std::endl;
};

Cure::~Cure()
{
	std::cout << "Cure destructor is called. " << std::endl;
};

Cure::Cure(const Cure & other)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = other;
};

Cure & Cure::operator=(const Cure & other)
{
	if(this != &other)
	{
		this->type = other.type;
	}
	return(*this);
};

