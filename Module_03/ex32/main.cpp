#include "FragTrap.hpp"

int main(){
	FragTrap *a = new FragTrap("first trap");
	
	a->attack("enemy_name");
	a->takeDamage(15);
	a->attack("enemy_name");
	a->beRepaired(6);
	a->attack("enemy_name");

	a->highFivesGuys();

	delete a;
}