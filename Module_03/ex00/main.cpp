#include "ClapTrap.hpp"
#include "test.hpp"

int main(){
	ClapTrap *a = new ClapTrap("first trap");
	
	C *c = new C(5);

	delete c;

	a->attack("enemy_name");
	a->takeDamage(15);
	a->attack("enemy_name");
	a->beRepaired(6);
	a->attack("enemy_name");

	delete a;
}