#include "Brain.hpp"

Brain::Brain(){std::cout << "brain constructor" << std::endl;}
Brain::Brain(const Brain& b){
	for (int i = 0; i < 100; i++)
		this->idea[i] = std::string(b.idea[i]);
}

Brain& Brain::operator= (const Brain& b){
	if (this != &b){
		for (int i = 0; i < 100; i++)
			this->idea[i] = std::string(b.idea[i]);
	}
	return (*this);
}

Brain::~Brain(){std::cout << "brain destructor" << std::endl;}