#include "PhoneBook.hpp"
#include <stdio.h>

PhoneBook::PhoneBook(){
	index = 0;
	size = 0;
};

PhoneBook::~PhoneBook(){};


void	PhoneBook::add(Contact contact)
{
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
		print_in_format(contacts[i].getFirstName());
		print_in_format(contacts[i].getLastName());
		print_in_format(contacts[i].getNickName());
		std::cout << std::endl;
		i++;
	}

	std::cout << "Enter an index : " ;
	std::cin >> i;
	if (i >= size || i < 0 )
		std::cout << "out of range index !!!" << std::endl;
	else
		std::cout << contacts[i].toString() << std::endl;
}
