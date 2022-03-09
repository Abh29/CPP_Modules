#pragma once
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

public:
	WrongCat();
	WrongCat(const WrongCat& a);
	WrongCat& operator= (const WrongCat& a);
	~WrongCat();
	void 		makeSound() const;
};



#endif
