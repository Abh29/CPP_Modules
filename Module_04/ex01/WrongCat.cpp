#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){std::cout << "WrongCat constructor" << std::endl;}
WrongCat::WrongCat(const WrongCat& a){ this->type = std::string(a.type);}
WrongCat& WrongCat::operator= (const WrongCat& a) {
	this->type = std::string(a.type);
	return (*this);
}
WrongCat::~WrongCat(){std::cout << "WrongCat destructor" << std::endl;}

void		WrongCat::makeSound() const {std::cout << "WrongCat Meowling  !!!" << std::endl; }