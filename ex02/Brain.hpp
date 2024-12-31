#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
		std::string ideas[100];
public:
	Brain();
	Brain(const Brain & other);
	std::string *getIdeas();
	Brain& operator=(const Brain & other);
	~Brain();
};


#endif