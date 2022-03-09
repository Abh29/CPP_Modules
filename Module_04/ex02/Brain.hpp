#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string idea[100];
public:
	Brain();
	Brain(const Brain& b);
	Brain& operator= (const Brain& b);
	~Brain();

};

#endif
