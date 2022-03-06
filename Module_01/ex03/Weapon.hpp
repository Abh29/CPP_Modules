#pragma once 
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string	type;

public:
	Weapon(/* args */);
	~Weapon();

	const std::string& getType() const;
	void	setType(std::string type);
};

#endif