#include "PhoneBook.hpp"
#include <stdio.h>

PhoneBook::PhoneBook(){
	int i;

	first = 0;
	size = 0;
	contacts = new Contact *[NMAX];
	i = 0;
	while (i < NMAX)
		contacts[i++] = NULL;
};
PhoneBook::~PhoneBook(){
	int	i;

	i = 0;
	while (i < NMAX)
		if (contacts[i])
			delete contacts[i++];
	delete contacts;
};

void	PhoneBook::add(Contact *contact)
{
	if (contacts[(first + size) % NMAX])
		delete contacts[(first + size) % NMAX];
	contacts[(first + size) % NMAX] = contact;
	if (size == NMAX)
		first = (first + 1) % NMAX;
	else
		size++;
	printf("size %d index %d   max %d\n", size, (first + size) % NMAX, NMAX);
}

void	PhoneBook::search(int i)
{
	if (i < size && i >= 0)
	{
		Contact *c = contacts[(i + first) % NMAX];
		std::cout << std::setw(10);
		std::cout << i << "|" << c->getFirstName() << "|" << c->getLastName() << "|" << c->getNickName() << std::endl;
	}
	else 
		std::cout << "invalid index !\n" ;
}
