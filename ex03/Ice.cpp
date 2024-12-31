#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice constructor is called. " << std::endl;
};

Ice::~Ice()
{
	std::cout << "Ice destructor is called. " << std::endl;
};

Ice::Ice(const Ice & other)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = other;
};

Ice & Ice::operator=(const Ice & other)
{
	if(this != &other)
	{
		this->type = other.type;
	}
	return(*this);
};

