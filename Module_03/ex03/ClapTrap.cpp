#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	name = "default_name";
	hitPoints = 10;
	attack_damage = 0;
	energyPoints = 10;
	std::cout << "ClapTrap default constructor !" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	this->name = name;
	hitPoints = 10;
	attack_damage = 0;
	energyPoints = 10;
	std::cout << "ClapTrap " << name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& c){
	std::cout << "ClapTrap copy constructor !" << std::endl;
	this->name = std::string(c.name);
	hitPoints = c.hitPoints;
	attack_damage = c.attack_damage;
	energyPoints = c.energyPoints;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c){
	std::cout << "ClapTrap::operator=" << std::endl;
	if ( this != &c ){
		this->name = std::string(c.name);
		hitPoints = c.hitPoints;
		attack_damage = c.attack_damage;
		energyPoints = c.energyPoints;
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
	std::cout << ", causing " << attack_damage << " points of damage!" << std::endl;
	energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << name <<  " took damage " << amount << std::endl;
	hitPoints -= amount;
	if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " has no hitpoints left !" << std::endl;
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


	int ClapTrap::getAttackDamage()
	{
		return this->attack_damage;
	}


	void ClapTrap::setAttackDamage(int attack_Damage)
	{
		this->attack_damage = attack_Damage;
	}


	int ClapTrap::getEnergyPoints()
	{
		return this->energyPoints;
	}


	void ClapTrap::setEnergyPoints(int energyPoints)
	{
		this->energyPoints = energyPoints;
	}
