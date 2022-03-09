#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}
Ice::Ice(const Ice& m) : AMateria(m) {}
Ice& Ice::operator= (const Ice& m) {this->type = m.type; return *this;}
Ice::~Ice(){}

void Ice::use(ICharacter& target){
	std::cout <<  "* shoots an ice bolt at " << target.getName()  << "*" << std::endl;
}

AMateria* Ice::clone()const {
	AMateria *i = new Ice(*this);
	return (i);
}
