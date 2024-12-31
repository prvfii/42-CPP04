#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat default constructor called." << std::endl;
};

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called." << std::endl;
};

WrongCat::WrongCat(const WrongCat & other)
{
	*this = other;
	std::cout << "Default WrongCat copy constructor called." << std::endl; 	
};

WrongCat&	WrongCat::operator=(const WrongCat & other)
{
	if(this != &other)
		this->type = other.type;
	return(*this);
};

void	WrongCat::makeSound() const
{
	std::cout << "..... [FAKE] Miaouw Miaouwwww Miaouwwwwwww ....." << std::endl;
};

std::string WrongCat::getType() const
{
	return(this->type);
};
