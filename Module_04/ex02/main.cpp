#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	//Animal *error = new Animal("this shouldn't work");

	std::cout << "_________________________" << std::endl;
	std::cout << "____Animals Array _______" << std::endl;
	std::cout << "_________________________" << std::endl;

	Animal **animals = new Animal*[10];

	for (int i = 0; i < 5; i++)
		animals[i] = new Cat();
	for (int i = 5; i < 10; i++)
		animals[i] = new Dog();
	

	getchar();

	std::cout << "_________________________" << std::endl;
	std::cout << "____cat coppy ___________" << std::endl;
	std::cout << "_________________________" << std::endl;

	Cat *catcpy =  new Cat(* dynamic_cast<Cat *>(animals[0]));
	
	catcpy->makeSound();
	animals[0]->makeSound();


	getchar();

	std::cout << "_________________________" << std::endl;
	std::cout << "____delete animals_______" << std::endl;
	std::cout << "_________________________" << std::endl;


	for (int i = 0; i < 10; i++)
		delete animals[i];
	delete[] animals;

	getchar();

	std::cout << "_________________________" << std::endl;
	std::cout << "____cat coppy ___________" << std::endl;
	std::cout << "_________________________" << std::endl;

	std::cout << catcpy->getType() << std::endl;
	catcpy->makeSound();

	delete catcpy;	
	return 0;
}