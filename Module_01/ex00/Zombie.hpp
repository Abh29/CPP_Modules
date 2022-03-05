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
	~Zombie();

	void	announce(void);

};

#endif