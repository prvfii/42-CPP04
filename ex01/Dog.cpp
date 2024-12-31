#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog default constructor called." << std::endl;
};

Dog::~Dog()
{
	std::cout << "Dog default destructor called." << std::endl;
	delete brain;
};

Dog::Dog(const Dog & other)
{
	*this = other;
	std::cout << "Default Dog copy constructor called." << std::endl; 	
};

Dog&	Dog::operator=(const Dog & other)
{	if(this != &other)
	{
		this->type = other.type;
		this->brain = other.brain;
	}
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