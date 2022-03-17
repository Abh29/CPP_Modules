#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "starting "<< std::endl;

	ShrubberyCreationForm	a1("tree.txt");
	RobotomyRequestForm		a2("RF1");
	PresidentialPardonForm	a3("President1");

	Bureaucrat 				b1("Albert", 150);
	Bureaucrat 				b2("James", 140);
	Bureaucrat 				b3("Evan", 100);
	Bureaucrat 				b4("Karl", 60);
	Bureaucrat 				b5("Peter", 30);
	Bureaucrat 				b6("Mark", 10);
	Bureaucrat 				b7("Leader", 1);

	std::cout << "\n"<< std::endl;

	std::cout << a1 << std::endl;
	std::cout << a2 << std::endl;
	std::cout << a3 << std::endl << std::endl;

	std::cout << "\n"<< std::endl;

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
	std::cout << b4 << std::endl;
	std::cout << b5 << std::endl;
	std::cout << b6 << std::endl;
	std::cout << b7 << std::endl;

	std::cout << "\n"<< std::endl;

	b1.signForm(a1);
	b1.executeForm(a1);
	b2.signForm(a1);
	b2.executeForm(a1);
	b7.signForm(a1);
	b7.executeForm(a1);

	getchar();
	std::cout << "\n"<< std::endl;

	b3.signForm(a2);
	b3.executeForm(a2);
	b4.signForm(a2);
	b4.executeForm(a2);
	b5.signForm(a2);
	b5.executeForm(a2);

	std::cout << "\n"<< std::endl;

	b5.signForm(a3);
	b5.executeForm(a3);
	b6.signForm(a3);
	b6.executeForm(a3);
	b7.signForm(a3);
	b7.executeForm(a3);

	std::cout << "\n"<< std::endl;

	return 0;
}

