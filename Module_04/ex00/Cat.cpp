#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){std::cout << "Cat constructor" << std::endl;}
Cat::Cat(const Cat& a){ this->type = std::string(a.type);}
Cat& Cat::operator= (const Cat& a) {
	this->type = std::string(a.type);
	return (*this);
}
Cat::~Cat(){std::cout << "Cat destructor" << std::endl;}

void		Cat::makeSound() const {std::cout << "Cat Meowling  !!!" << std::endl; }