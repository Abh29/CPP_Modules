#include "Brain.hpp"

Brain::Brain(){std::cout << "Brain constructor" << std::endl;}
Brain::Brain(const Brain& b){
	std::cout << "Brain coppy constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = std::string(b.ideas[i]);
}

Brain& Brain::operator= (const Brain& b){
	std::cout << "Brain operator=" << std::endl;
	if (this != &b){
		for (int i = 0; i < 100; i++)
			this->ideas[i] = std::string(b.ideas[i]);
	}
	return (*this);
}

Brain::~Brain(){std::cout << "Brain destructor" << std::endl;}