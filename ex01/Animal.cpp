#include "Animal.hpp"

Animal::Animal() : type("default")
{
	std::cout << "Animal default constructor called." << std::endl;
};

Animal::~Animal()
{
	std::cout << "Animal default destructor called." << std::endl;
};

Animal::Animal(const Animal & other)
{
	*this = other;
	std::cout << "Default animal copy constructor called." << std::endl; 	
};

Animal&	Animal::operator=(const Animal & other)
{
	if(this != &other)
		this->type = other.type;
	return(*this);
};

void	Animal::makeSound() const
{
	std::cout << "..... Default animal sound ....." << std::endl;
};

std::string Animal::getType() const
{
	return(this->type);
};