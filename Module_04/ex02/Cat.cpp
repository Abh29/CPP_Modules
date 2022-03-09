#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){std::cout << "Cat constructor" << std::endl;
	brain = new Brain();}
Cat::Cat(const Cat& a){ this->type = std::string(a.type);
		this->brain = new Brain(*a.brain);
}

Cat& Cat::operator= (const Cat& a) {
	this->type = std::string(a.type);
	return (*this);
}
Cat::~Cat(){std::cout << "Cat destructor" << std::endl;
	delete brain;}

void		Cat::makeSound() const {std::cout << "Cat Meowling  !!!" << std::endl; }