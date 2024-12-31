#include "AMateria.hpp"

AMateria::AMateria() : type("default")
{
	std::cout << "AMateria DEFAULT constructor called." << std::endl;
};

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called." << std::endl;
};

AMateria::AMateria(std::string const & type)
{
	std::cout << "Constructor with type " << type << "called." << std::endl;
	this->type = type;
};

AMateria & AMateria::operator=(const AMateria & other)
{
	if(this != &other)
	{
		this->type = other.type;
	}
	return(*this);
};

AMateria::AMateria(const AMateria & other)
{
	std::cout << "Copy constructor Materia called." << std::endl;
	*this = other;
};

std::string const & AMateria::getType() const
{
	return(this->type);
};

