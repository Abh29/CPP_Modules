#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "ScavTrap default constructor !" << std::endl;
	ClapTrap::attack_damage = 20;
	ClapTrap::energyPoints = 50;
	ClapTrap::hitPoints = 100;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap " << name << " constructed" << std::endl;
	ClapTrap::attack_damage = 20;
	ClapTrap::energyPoints = 50;
	ClapTrap::hitPoints = 100;
}

ScavTrap::ScavTrap(const ScavTrap& s) : ClapTrap(s){}

ScavTrap& ScavTrap::operator= (const ScavTrap& s) {
	ClapTrap::operator= (s);
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->getName() << " is destructed !" << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if (this->getEnergyPoints() <= 0 || this->getHitPoints() <= 0)
		return ;
	std::cout << "ScavTrap " << this->getName() << " attacks " << target ;
	std::cout << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
}

void ScavTrap::takeDamage(unsigned int amount){
	std::cout << "ScavTrap " << this->getName() <<  " took damage " << amount << std::endl;
	this->setHitPoints( getHitPoints() - amount);
	if (this->getHitPoints() <= 0)
		std::cout << "ScavTrap " << this->getName() << " has not hit points left !" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount){
	if (this->getEnergyPoints() <= 0 || this->getHitPoints() <= 0)
		return ;
	std::cout << "ScavTrap " << this->getName() << " is being repaired" << std::endl;
	this->setHitPoints( this->getHitPoints() + amount);
}

void	ScavTrap::guardGate(){
	if (hitPoints <= 0)
		return ;
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
}