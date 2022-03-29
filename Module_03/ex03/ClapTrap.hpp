#pragma once 
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	int hitPoints;
	int attack_damage;
	int energyPoints;

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& c);
	ClapTrap& operator= (const ClapTrap& c);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);



	std::string getName();
	void setName(std::string name);
	int getHitPoints();
	void setHitPoints(int hitPoints);
	int getAttackDamage();
	void setAttackDamage(int damage);
	int getEnergyPoints();
	void setEnergyPoints(int energyPoints);

};


#endif
