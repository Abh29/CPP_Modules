#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){this->type = "WrongAnimal";
std::cout << "WrongAnimal constructor" << std::endl;}
WrongAnimal::WrongAnimal(std::string type){this->type = type;
	std::cout << "WrongAnimal constructor" << std::endl;}
WrongAnimal::WrongAnimal(const WrongAnimal& a){ this->type = std::string(a.type);}
WrongAnimal& WrongAnimal::operator= (const WrongAnimal& a) {
	this->type = std::string(a.type);
	return (*this);
}
WrongAnimal::~WrongAnimal(){std::cout << "WrongAnimal destructor" << std::endl;}

std::string WrongAnimal::getType() const {return type;}

void		WrongAnimal::makeSound() const {std::cout << "WrongAnimal making a sound !!!" << std::endl;};
