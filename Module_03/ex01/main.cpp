#include "ScavTrap.hpp"

int main(){
	ScavTrap *a = new ScavTrap("ScavRobot");
	
	a->attack("enemy_name");
	a->takeDamage(15);
	a->attack("enemy_name");
	a->beRepaired(6);
	a->attack("enemy_name");

	a->guardGate();

	delete a;
}