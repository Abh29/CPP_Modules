#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){std::cout << "Dog constructor" << std::endl;}
Dog::Dog(const Dog& a){ this->type = std::string(a.type);}
Dog& Dog::operator= (const Dog& a) {
	this->type = std::string(a.type);
	return (*this);
}
Dog::~Dog(){std::cout << "Dog destructor" << std::endl;}

void		Dog::makeSound() const {std::cout << "Dog barking !!!" << std::endl; }

