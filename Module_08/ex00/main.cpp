#include <iostream>
#include "easyfind.hpp"
#include <list>

int main ()
{
	std::list<int> list;
	std::list<int>::iterator iter;


	list.push_back(5);
	list.push_back(3);
	list.push_back(-1);
	list.push_back(2);
	list.push_back(4);
	list.push_back(7);
	list.push_back(-1);
	list.push_back(10);
	list.push_back(3);
	list.push_back(8);

	std::cout << "first lookup -1 " << std::endl;
	iter = easyfind(list, -1);
	if (iter == list.end())
		std::cout << "element is not present in the container !" << std::endl;
	else
		for ( ; iter != list.end(); iter++)
			std::cout << *iter << std::endl;
	

	std::cout << std::endl;
	std::cout << "second lookup 8 " << std::endl;
	iter = easyfind(list, 8);
	if (iter == list.end())
		std::cout << "element is not present in the container !" << std::endl;
	else
		for ( ; iter != list.end(); iter++)
			std::cout << *iter << std::endl;

	std::cout << std::endl;
	std::cout << "third lookup 12 " << std::endl;
	iter = easyfind(list, 12);
	if (iter == list.end())
		std::cout << "element is not present in the container !" << std::endl;
	else
		for ( ; iter != list.end(); iter++)
			std::cout << *iter << std::endl;

	return (0);
}

