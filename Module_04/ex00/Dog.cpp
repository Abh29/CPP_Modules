#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){std::cout << "Dog constructor" << std::endl;}
Dog::Dog(const Dog& a){
	std::cout << "Dog copy constructor" << std::endl;
	this->type = std::string(a.type);}
Dog& Dog::operator= (const Dog& a) {
	std::cout << "Dog operator=" << std::endl;
	this->type = std::string(a.type);
	return (*this);
}
Dog::~Dog(){std::cout << "Dog destructor" << std::endl;}

void		Dog::makeSound() const {std::cout << "Dog barking !!!" << std::endl; }

