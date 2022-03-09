#pragma once
#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
private:

public:
	Cat();
	Cat(const Cat& a);
	Cat& operator= (const Cat& a);
	~Cat();
	void 		makeSound() const;
};



#endif
