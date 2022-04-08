#include <iostream>
#include "MutantStack.hpp"
#include <list>

int main()
{

	std::cout << "--------------------------" << std::endl;
	std::cout << "-------MutantStack--------" << std::endl;
	std::cout << "--------------------------" << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	
	std::cout << "--------------------------" << std::endl;
	std::cout << "---------std::list--------" << std::endl;
	std::cout << "--------------------------" << std::endl;

	std::list<int> lis;
	lis.push_back(5);
	lis.push_back(17); 
	std::cout << lis.back() << std::endl;
	lis.pop_back();
	std::cout << lis.size() << std::endl;
	lis.push_back(3);
	lis.push_back(5);
	lis.push_back(737);
	lis.push_back(0);
	std::list<int>::iterator itlb = lis.begin();
	std::list<int>::iterator itle = lis.end();
	++itlb;
	--itlb;
	while (itlb != itle)
	{
		std::cout << *itlb << std::endl;
		++itlb;
	}

	return 0;
}