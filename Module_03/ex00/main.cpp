#include "ClapTrap.hpp"

int main(){
	ClapTrap *a = new ClapTrap("robot1");
	ClapTrap b("robot2");

	ClapTrap c(b);
	c.attack("c enemy");

	ClapTrap d;
	d = c;
	d.takeDamage(5);

	a->attack("robot_enemy");
	a->takeDamage(15);
	a->attack("robot_enemy");
	a->beRepaired(6);
	a->attack("robot_enemy");

	delete a;
}