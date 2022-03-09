#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){std::cout << "Dog constructor" << std::endl;
	brain = new Brain();}
Dog::Dog(const Dog& a){ this->type = std::string(a.type);
	this->brain = new Brain(*a.brain);
}
Dog& Dog::operator= (const Dog& a) {
	this->type = std::string(a.type);
	return (*this);
}
Dog::~Dog(){std::cout << "Dog destructor" << std::endl;
	delete brain;}

void		Dog::makeSound() const {std::cout << "Dog barking !!!" << std::endl; }
