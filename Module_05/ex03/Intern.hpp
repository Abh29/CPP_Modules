#pragma once
#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	
public:
	Intern();
	Intern(Intern const &);
	Intern& operator= (const Intern);
	~Intern();

	Form	*makeForm(std::string form, std::string target);	
};



#endif