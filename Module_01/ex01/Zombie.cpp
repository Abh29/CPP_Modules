#include "Zombie.hpp"

Zombie::Zombie(void){};
Zombie::Zombie(std::string name){this->name = name;}
Zombie::~Zombie(void){ std::cout << name << " is dead now !" << std::endl; }

void	Zombie::announce(void){ std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl; }
Zombie* Zombie::newZombie(std::string name){return new Zombie(name);}
void	Zombie::randomChump( std::string name ){
	Zombie z = Zombie(name);
	z.announce();
}