#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal **animals = new Animal*[10];

	for (int i = 0; i < 5; i++)
		animals[i] = new Cat();
	for (int i = 5; i < 10; i++)
		animals[i] = new Dog();
	

	Cat *catcpy =  new Cat(*((Cat *)animals[0]));
	
	catcpy->makeSound();
	animals[0]->makeSound();
	std::cout << "something \n\n\n" << std::endl;



	for (int i = 0; i < 10; i++)
		delete animals[i];
	delete[] animals;

	std::cout << catcpy->getType() << std::endl;
	catcpy->makeSound();

	delete catcpy;
	return 0;
}