#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void){


	try
	{
		Form f1 = Form("F1", 25, 100);
		std::cout << f1 << std::endl;
		Form f2 = Form("F2", 20, 152);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	
	

	try
	{
		Bureaucrat b = Bureaucrat("B1", 150);
		Bureaucrat b2 = Bureaucrat("B2", 20);
		Form f = Form("F3", 25, 100);

		f.beSigned(b);

		f.beSigned(b2);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	return (1);
}
