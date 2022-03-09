#pragma once
#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
protected:

public:
	Cure();
	Cure(const Cure& m);
	Cure& operator= (const Cure& m);
	virtual ~Cure();

	void use(ICharacter& target);
	AMateria* clone() const;
};

#endif