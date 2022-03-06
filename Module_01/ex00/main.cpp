#include "Zombie.hpp"

int main()
{
	Zombie A = Zombie("zombie A");
	Zombie *B = newZombie("zombie B");
	randomChump("zombie C");
	delete B;
	return 0;
}
