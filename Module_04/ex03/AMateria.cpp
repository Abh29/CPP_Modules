#include "AMateria.hpp"

AMateria::AMateria(std::string const &type){this->type = type;}
AMateria::AMateria(const AMateria& m){this->type = std::string(m.type);}
AMateria& AMateria::operator= (const AMateria& m) {return *this;}
AMateria::~AMateria(){}

std::string const& AMateria::getType() const {return this->type;}
void AMateria::use(ICharacter& target){
	(void) target;
}

