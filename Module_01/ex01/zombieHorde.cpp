#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie *out = new Zombie[N];
	(void) name;
	for (int i = 0; i < N; i++)
		out[i].setName(name);
	
	return (out);
}