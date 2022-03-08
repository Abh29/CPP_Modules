#include "DimondTrap.hpp"

int main(){
	DimondTrap *a = new DimondTrap("dimond");
	
	a->attack("enemy_name");
	a->takeDamage(15);
	a->attack("enemy_name");
	a->beRepaired(6);
	a->attack("enemy_name");

	a->highFivesGuys();
	a->guardGate();

	a->whoAmI();

	delete a;
}