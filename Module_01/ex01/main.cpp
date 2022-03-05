#include "Zombie.hpp"

int main()
{
	Zombie A = Zombie("zombie A");
	Zombie *B = A.newZombie("zombie B");
	A.randomChump("zombie C");
	delete B;
	return 0;
}
