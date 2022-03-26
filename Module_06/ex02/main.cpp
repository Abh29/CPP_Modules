#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>



Base * generate(void);
void identify(Base* p);
void identify(Base& p);


int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		Base *base = generate();
		identify(base);
		delete base;
		std::cout << std::endl;
	}


	std::cout << "\n\n\n";


	for (int i = 0; i < 5; i++)
	{
		Base &base = *(generate());
		identify(base);
		delete &base;
		std::cout << std::endl;
	}

	return 0;
}

Base *generate(void){
	int i = rand() % 3;
	switch (i)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	case 2:
		return new C();
	default:
		break;
	}
	return (NULL);
}

void identify(Base* p)
{
	if ((char*)p == NULL)
		std::cout << "unknoun type pointer !" << std::endl;
	else if (dynamic_cast<A*>(p))
		std::cout << "identified as class: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "identified as class: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "identified as class: C" << std::endl;
}


void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "identified as class: A" << std::endl;
		return ;
	}
	catch (...){}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "identified as class: B" << std::endl;
		return ;
	}
	catch (...) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "identified as class: C" << std::endl;
		return ;
	}
	catch (...) {}

	std::cout << "unknoun base !" << std::endl;
}

