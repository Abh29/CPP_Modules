#include "Bureaucrat.hpp"
#include <iostream>

int main(void){
	try
	{
		Bureaucrat b = Bureaucrat("B1", 150);
		Bureaucrat b2 = Bureaucrat("B2", 20);

		std::cout << b << std::endl;
		std::cout << b2 << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	



	try
	{
		Bureaucrat *b = new Bureaucrat("B3", 170);
		delete b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}




	try
	{
		Bureaucrat b = Bureaucrat("B4", -1);
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << "un identified exeption" << '\n';
	}




	try
	{
		Bureaucrat b = Bureaucrat("B5", 150);
		b--;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << "un identified exeption" << '\n';
	}

		try
	{
		Bureaucrat b = Bureaucrat("B6", 1);
		b++;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << "un identified exeption" << '\n';
	}

		try
	{
		Bureaucrat b = Bureaucrat("B7", 3);
		b++;
		std::cout << b << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << "un identified exeption" << '\n';
	}
	
	return (1);
}