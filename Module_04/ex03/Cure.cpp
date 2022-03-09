#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}
Cure::Cure(const Cure& m) : AMateria(m) {}
Cure& Cure::operator= (const Cure& m) {this->type = m.type; return *this;}
Cure::~Cure(){}

void Cure::use(ICharacter& target){
	std::cout <<  "* heals " << target.getName()  << "’s wounds *" << std::endl;
}

AMateria* Cure::clone()const {
	AMateria *i = new Cure(*this);
	return (i);
}
