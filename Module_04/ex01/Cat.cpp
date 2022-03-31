#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){std::cout << "Cat constructor" << std::endl;
	brain = new Brain();}
Cat::Cat(const Cat& a){ 
	std::cout << "Cat coppy constructor " << std::endl;
	this->type = std::string(a.type);
	this->brain = new Brain(*a.brain);
}

Cat& Cat::operator= (const Cat& a) {
	std::cout << "Cat operator=" << std::endl;
	this->type = std::string(a.type);
	this->brain = a.brain;
	return (*this);
}
Cat::~Cat(){
	std::cout << "Cat destructor" << std::endl;
	delete brain;
}

void		Cat::makeSound() const {std::cout << "Cat Meowling  !!!" << std::endl; }