#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	first = 0;
	size = 0;
};
PhoneBook::~PhoneBook(){};

void	PhoneBook::add(Contact *contact)
{
	contacts[(first + size) % NMAX] = contact;
	if (size == NMAX)
		first = (first + 1) % NMAX;
	else
		size++;
}

void	PhoneBook::search(int i)
{
	if (i <= size && i >= 0)
	{
		Contact *c = contacts[(i + first) % NMAX];
		std::cout << std::setw(10);
		std::cout << i << "|" << c->getFirstName() << "|" << c->getLastName() << "|" << c->getNickName() << std::endl;
	}
	else 
		std::cout << "invalid index !\n" ;
}
