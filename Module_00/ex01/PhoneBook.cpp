#include "PhoneBook.hpp"
#include <stdio.h>

PhoneBook::PhoneBook(){
	int i;

	index = 0;
	size = 0;
	contacts = new Contact*[NMAX];
	i = 0;
	while (i < NMAX)
		contacts[i++] = NULL;
};
PhoneBook::~PhoneBook(){
	int	i;

	i = 0;
	while (i < NMAX)
	{
		if (contacts[i])
			delete contacts[i];
		i++;
	}
	delete[] contacts;
};

void	PhoneBook::add(Contact *contact)
{
	if (contacts[index])
		delete contacts[index];
	contacts[index] = contact;
	if (size < NMAX)
		size++;
	index = (index + 1) % NMAX;
}

void	print_in_format(std::string s)
{
	if (s.length() > 10)
		std::cout << std::setw(10) << s.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << s << "|";
}

void	PhoneBook::showList(void)
{
	int	i;

	i = 0;
	while (i < size)
	{
		std::cout << std::setw(10) << i << "|";
		print_in_format(contacts[i]->getFirstName());
		print_in_format(contacts[i]->getLastName());
		print_in_format(contacts[i]->getNickName());
		std::cout << std::endl;
		i++;
	}
}
