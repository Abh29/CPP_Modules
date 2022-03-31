#pragma once
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class Character;

class AMateria
{
protected:
	std::string type;

public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria& m);
	AMateria& operator= (const AMateria& m);
	virtual ~AMateria();

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif