#include "Intern.hpp"

Intern::Intern(){}
Intern::Intern(const Intern &){}
Intern& Intern::operator= (const Intern){
	return *this;
}
Intern::~Intern(){}

Form	*Intern::makeForm(std::string form, std::string target){

	std::string	forms[] = {"shrubbery creation", "presidential pardon", "robotomy request"};
	int	i = 0;
	while (i < 3)
	{
		if (form == forms[i])
			break;
		i++;
	}

	switch (i)
	{
		case 0:
			return (new ShrubberyCreationForm(target));
		case 1:
			return (new PresidentialPardonForm(target));
		case 2:
			return (new RobotomyRequestForm(target));
		default:
			std::cerr << "unknoun form " << form << std::endl;
	}
	return NULL;
}

