#include "Contact.hpp"
#include "PhoneBook.hpp"

void addContact(PhoneBook *pbook);
void searchContact(PhoneBook *pbook);

int	main()
{
	std::string	cmd;
	PhoneBook	*pbook = new PhoneBook();
	
	
	
	while (true)
	{
		std::cout << "put a command : ";
		std::cin >> cmd;
		if (cmd == "ADD")
			addContact(pbook);
		else if (cmd == "SEARCH")
			searchContact(pbook);
		else if (cmd == "EXIT")
			break;
		std::cout << std::endl;
	}
	delete pbook;
}

void	addContact(PhoneBook *pbook)
{
	std::string fn, ln, nn, pn, ds;
	std::cout << "enter first name : " ;
	std::cin >> fn;
	std::cout << "enter last name : " ;
	std::cin >> ln;
	std::cout << "enter nick name : " ;
	std::cin >> nn;
	std::cout << "enter phone number : " ;
	std::cin >> pn;
	std::cout << "enter darkest secret : " ;
	std::cin >> ds;

	pbook->add(new Contact(fn, ln, nn, pn, ds));
}

void	searchContact(PhoneBook *pbook)
{
	pbook->showList();
}