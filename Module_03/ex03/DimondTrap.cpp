#include "DimondTrap.hpp"

DimondTrap::DimondTrap(std::string name) : ClapTrap(name + "_clap_name"),
											ScavTrap(),
											FragTrap()
{
	std::cout << "DimondTrap " << name << " constructed" << std::endl;
	this->name = name;
	this->damage = FragTrap::damage;
	this->energyPoints = ScavTrap::energyPoints;
	this->hitPoints = ScavTrap::hitPoints;
}
DimondTrap::DimondTrap(const DimondTrap& s) : ClapTrap(s), ScavTrap(s), FragTrap(s) {
	this->name = std::string(s.name);
}

DimondTrap& DimondTrap::operator= (const DimondTrap& s) {
	ScavTrap::operator= (s);
	FragTrap::operator= (s);
	return (*this);
}

DimondTrap::~DimondTrap(){
	std::cout << "DimondTrap " << name << " is destructed !" << std::endl;
}

void DimondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void DimondTrap::takeDamage(unsigned int amount){
	std::cout << "DimondTrap " << name <<  " took damage " << amount << std::endl;
	this->FragTrap::setHitPoints( FragTrap::getHitPoints() - amount);
	if (this->FragTrap::getHitPoints() <= 0)
		std::cout << "DimondTrap " << name<< " died !" << std::endl;
}

void DimondTrap::beRepaired(unsigned int amount){
	if (this->ScavTrap::getEnergyPoints() <= 0 || this->FragTrap::getHitPoints() <= 0)
		return ;
	std::cout << "DimondTrap " << name << " is being repaired" << std::endl;
	this->FragTrap::setHitPoints( this->FragTrap::getHitPoints() + amount);
}

void DimondTrap::whoAmI(){
	std::cout << name << "   " << this->ClapTrap::getName() << std::endl;
}
