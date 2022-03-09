#pragma once
#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice : public AMateria
{
protected:

public:
	Ice();
	Ice(const Ice& m);
	Ice& operator= (const Ice& m);
	virtual ~Ice();

	void use(ICharacter& target);
	AMateria* clone() const;
};

#endif