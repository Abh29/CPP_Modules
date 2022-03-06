#include "Zombie.hpp"

int main()
{
	int	N = 5;
	Zombie *a = new Zombie("zombie a");
	Zombie *zombies = zombieHorde(N, "horde");

	for (int i = 0; i < N; i++)
		zombies[i].announce();
	
	delete a;
	delete[] zombies;
	return 0;
}
