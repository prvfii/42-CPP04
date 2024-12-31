#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("default")
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
};

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called." << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal & other)
{
	*this = other;
	std::cout << "Default WrongAnimal copy constructor called." << std::endl; 	
};

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal & other)
{
	if(this != &other)
		this->type = other.type;
	return(*this);
};

void	WrongAnimal::makeSound() const
{
	std::cout << "..... Default WrongAnimal sound ....." << std::endl;
};

std::string WrongAnimal::getType() const
{
	return(this->type);
};