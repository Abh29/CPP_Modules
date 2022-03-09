#include "Animal.hpp"

Animal::Animal(){this->type = "animal";
std::cout << "Animal constructor" << std::endl;}
Animal::Animal(std::string type){this->type = type;
	std::cout << "Animal constructor" << std::endl;}
Animal::Animal(const Animal& a){ this->type = std::string(a.type);}
Animal& Animal::operator= (const Animal& a) {
	this->type = std::string(a.type);
	return (*this);
}
Animal::~Animal(){std::cout << "Animal destructor" << std::endl;}

std::string Animal::getType() const {return type;}

void		Animal::makeSound() const {std::cout << "animal making a sound !!!" << std::endl;};
