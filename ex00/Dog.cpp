#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog default constructor called." << std::endl;
};

Dog::~Dog()
{
	std::cout << "Dog default destructor called." << std::endl;
};

Dog::Dog(const Dog & other)
{
	*this = other;
	std::cout << "Default Dog copy constructor called." << std::endl; 	
};

Dog&	Dog::operator=(const Dog & other)
{
	if(this != &other)
		this->type = other.type;
	return(*this);
};

void	Dog::makeSound() const
{
	std::cout << "..... Waf Wafffffff Waffffffff ....." << std::endl;
};
std::string Dog::getType() const
{
	return(this->type);
};