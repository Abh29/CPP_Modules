#ifndef	PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#define		NMAX		8

class PhoneBook
{
	private:
		int 	first;
		int		size;
		Contact	*contacts[NMAX];
		
	public:
		PhoneBook();
		~PhoneBook();
	
		void	add(Contact *contact);
		void	search(int	i);
		void	remove(Contact contact);

};

#endif
