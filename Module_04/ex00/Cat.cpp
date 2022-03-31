#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){std::cout << "Cat constructor" << std::endl;}
Cat::Cat(const Cat& a){ 
	std::cout << "Cat copy constructor" << std::endl;
	this->type = std::string(a.type);
}
Cat& Cat::operator= (const Cat& a) {
	std::cout << "Cat operator=" << std::endl;
	this->type = std::string(a.type);
	return (*this);
}
Cat::~Cat(){std::cout << "Cat destructor" << std::endl;}

void		Cat::makeSound() const {std::cout << "Cat Meowling  !!!" << std::endl; }