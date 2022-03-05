#pragma once 
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <ctime>


class Zombie
{


private:
	std::string	name;




public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	Zombie* newZombie(std::string name);
	void randomChump( std::string name );
	void	announce(void);

};

#endif