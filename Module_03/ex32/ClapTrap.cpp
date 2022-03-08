#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
	this->name = name;
	hitPoints = 10;
	damage = 0;
	energyPoints = 10;
	std::cout << "ClapTrap " << name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& c){
	this->name = std::string(c.name);
}

ClapTrap& ClapTrap::operator= (const ClapTrap& c){
	if ( this != &c ){
		this->name = std::string(c.name);
	}
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << name << " destructed !" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (energyPoints <= 0 || hitPoints <= 0)
		return ;
	std::cout << "ClapTrap " << name << " attacks " << target ;
	std::cout << ", causing " << damage << " points of damage!" << std::endl;
	energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << name <<  " took damage " << amount << std::endl;
	hitPoints -= amount;
	if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " died !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (energyPoints <= 0 || hitPoints <= 0)
		return ;
	std::cout << "ClapTrap " << name << " is being repaired" << std::endl;
	hitPoints += amount;
}



	std::string ClapTrap::getName()
	{
		return this->name;
	}


	void ClapTrap::setName(std::string name)
	{
		this->name = name;
	}


	int ClapTrap::getHitPoints()
	{
		return hitPoints;
	}


	void ClapTrap::setHitPoints(int hitPoints)
	{
		this->hitPoints = hitPoints;
	}


	int ClapTrap::getDamage()
	{
		return this->damage;
	}


	void ClapTrap::setDamage(int damage)
	{
		this->damage = damage;
	}


	int ClapTrap::getEnergyPoints()
	{
		return this->energyPoints;
	}


	void ClapTrap::setEnergyPoints(int energyPoints)
	{
		this->energyPoints = energyPoints;
	}
