#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
											ScavTrap(),
											FragTrap()
{
	std::cout << "DiamondTrap " << name << " constructed" << std::endl;
	this->name = name;
	this->damage = FragTrap::damage;
	this->energyPoints = ScavTrap::energyPoints;
	this->hitPoints = ScavTrap::hitPoints;
}
DiamondTrap::DiamondTrap(const DiamondTrap& s) : ClapTrap(s), ScavTrap(s), FragTrap(s) {
	this->name = std::string(s.name);
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& s) {
	ScavTrap::operator= (s);
	FragTrap::operator= (s);
	return (*this);
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << name << " is destructed !" << std::endl;
}

void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount){
	std::cout << "DiamondTrap " << name <<  " took damage " << amount << std::endl;
	this->FragTrap::setHitPoints( FragTrap::getHitPoints() - amount);
	if (this->FragTrap::getHitPoints() <= 0)
		std::cout << "DiamondTrap " << name<< " died !" << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount){
	if (this->ScavTrap::getEnergyPoints() <= 0 || this->FragTrap::getHitPoints() <= 0)
		return ;
	std::cout << "DiamondTrap " << name << " is being repaired" << std::endl;
	this->FragTrap::setHitPoints( this->FragTrap::getHitPoints() + amount);
}

void DiamondTrap::whoAmI(){
	std::cout << name << "   " << this->ClapTrap::getName() << std::endl;
}
