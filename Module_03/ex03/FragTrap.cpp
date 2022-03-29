#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap default constructor !" << std::endl;
	attack_damage = 30;
	energyPoints = 100;
	hitPoints = 100;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap " << name << " constructed" << std::endl;
	attack_damage = 30;
	energyPoints = 100;
	hitPoints = 100;
}

FragTrap::FragTrap(const FragTrap& s) : ClapTrap(s){
	std::cout << "FragTrap copy constructor" << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap& s) {
	ClapTrap::operator= (s);
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->getName() << " is destructed !" << std::endl;
}


void FragTrap::attack(const std::string& target){
	if (this->getEnergyPoints() <= 0 || this->getHitPoints() <= 0)
		return ;
	std::cout << "FragTrap " << this->getName() << " attacks " << target ;
	std::cout << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
}

void FragTrap::takeDamage(unsigned int amount){
	std::cout << "FragTrap " << this->getName() <<  " took damage " << amount << std::endl;
	this->setHitPoints( getHitPoints() - amount);
	if (this->getHitPoints() <= 0)
		std::cout << "FragTrap " << this->getName() << " has no hit points left !" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount){
	if (this->getEnergyPoints() <= 0 || this->getHitPoints() <= 0)
		return ;
	std::cout << "FragTrap " << this->getName() << " is being repaired" << std::endl;
	this->setHitPoints( this->getHitPoints() + amount);
}

void FragTrap::highFivesGuys( void ) {
	if (energyPoints <= 0)
		return ;
	std::cout << this->getName() << " High Five !" << std::endl;
}
