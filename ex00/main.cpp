#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const WrongAnimal *meta = new WrongAnimal();
	// const Animal *j = new Dog();
	const WrongAnimal *i = new WrongCat();
	// std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	// j->makeSound();
	meta->makeSound();

	delete i;
	// delete j;
	delete meta;
	return (0);
}