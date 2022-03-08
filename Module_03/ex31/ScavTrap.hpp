#pragma once
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& s);
	ScavTrap& operator= (const ScavTrap& s);
	~ScavTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void guardGate(void);

};


#endif
