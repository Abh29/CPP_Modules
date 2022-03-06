#pragma once
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
	Weapon Weapon;
	std::string	name;

public:
	HumanA(/* args */);
	~HumanA();
};

#endif