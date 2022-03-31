#pragma once
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class AMateria;

class Character : public ICharacter
{
private:
	std::string name;
	AMateria	**enventory;

public:
	Character();
	Character(std::string name);
	Character(const Character &c);
	Character& operator= (const Character& c);
	~Character();


	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif