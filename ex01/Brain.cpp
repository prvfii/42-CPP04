#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called." << std::endl;
};
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
};
Brain::Brain(const Brain & other)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = other;
};

std::string *Brain::getIdeas()
{
	return(this->ideas);
};
Brain & Brain::operator=(const Brain & other)
{
	if(this != &other)
	{
		for(int i = 0; i < 100; i++)
		{
			this->getIdeas()[i] = ideas[i];
		}
	}
	return(*this);
};

