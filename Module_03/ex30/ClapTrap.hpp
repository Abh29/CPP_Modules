#pragma once 
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string name;
	int	hitPoints;
	int damage;
	int energyPoints;


public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& c);
	ClapTrap& operator= (const ClapTrap& c);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};


#endif
