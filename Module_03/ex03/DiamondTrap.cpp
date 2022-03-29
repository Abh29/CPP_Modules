#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) :	ClapTrap("default_name_clap_name"),
									ScavTrap(),
									FragTrap()
									{
	std::cout << "DiamondTrap default constructor !" << std::endl;
	this->name = "default_name";
	this->attack_damage = FragTrap::attack_damage;
	this->energyPoints = ScavTrap::energyPoints;
	this->hitPoints = ScavTrap::hitPoints;
									}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
											ScavTrap(name),
											FragTrap(name)
{
	std::cout << "DiamondTrap " << name << " constructed" << std::endl;
	ClapTrap::name = name + "_clap_name";
	this->name = name;
	this->attack_damage = FragTrap::attack_damage;
	this->energyPoints = ScavTrap::energyPoints;
	this->hitPoints = ScavTrap::hitPoints;
}
DiamondTrap::DiamondTrap(const DiamondTrap& s) : ClapTrap(s), ScavTrap(s), FragTrap(s) {
	std::cout << "DiamondTrap copy constructor" << std::endl;
	this->name = std::string(s.name);
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& s) {
	std::cout << "DiamondTrap::operator=" << std::endl;
	ClapTrap::operator=(s);
	this->name = s.name;
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
		std::cout << "DiamondTrap " << name<< " has no hit points left !" << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount){
	if (this->ScavTrap::getEnergyPoints() <= 0 || this->FragTrap::getHitPoints() <= 0)
		return ;
	std::cout << "DiamondTrap " << name << " is being repaired" << std::endl;
	this->FragTrap::setHitPoints( this->FragTrap::getHitPoints() + amount);
}

void DiamondTrap::whoAmI(){
	if (hitPoints <= 0)
		return ;
	std::cout << name << "   " << this->ClapTrap::getName() << std::endl;
}
