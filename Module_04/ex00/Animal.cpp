#include "Animal.hpp"

Animal::Animal(){
	this->type = "animal";
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(std::string type){this->type = type;
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(const Animal& a){ 
	std::cout << "Animal copy constructor" << std::endl;
	this->type = std::string(a.type);
}

Animal& Animal::operator= (const Animal& a) {
	std::cout << "Animal operator=" << std::endl;
	this->type = std::string(a.type);
	return (*this);
}
Animal::~Animal(){std::cout << "Animal destructor" << std::endl;}

std::string Animal::getType() const {return type;}

void		Animal::makeSound() const {std::cout << "animal making a sound !!!" << std::endl;};
