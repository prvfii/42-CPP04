#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat default constructor called." << std::endl;
};

Cat::~Cat()
{
	std::cout << "Cat default destructor called." << std::endl;
};

Cat::Cat(const Cat & other)
{
	*this = other;
	std::cout << "Default Cat copy constructor called." << std::endl; 	
};

Cat&	Cat::operator=(const Cat & other)
{
	if(this != &other)
		this->type = other.type;
	return(*this);
};

void	Cat::makeSound() const
{
	std::cout << "..... Miaouw Miaouwwww Miaouwwwwwww ....." << std::endl;
};

std::string Cat::getType() const
{
	return(this->type);
};
