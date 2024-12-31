#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void)
{
	//const Animal *lol = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	
	const Animal *animals[4];
	//lol->makeSound();
	for(int i = 0; i < 2; i++)
	{
		animals[i] = new Cat();
		std::cout << "\n";
	}

	for(int i = 2; i < 4; i++)
	{
		animals[i] = new Dog();
		std::cout << "\n";
	}

	for(int i = 0; i < 4; i++)
	{
		delete animals[i];
		std::cout << "\n";
	}
	delete j; // should not create a leak
	delete i;
	//system("leaks Animal");
	return (0);
}