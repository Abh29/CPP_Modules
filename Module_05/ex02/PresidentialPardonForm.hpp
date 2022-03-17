#pragma once
#ifndef __PRESIDENTIALPARDONFORM_HPP__
#define __PRESIDENTIALPARDONFORM_HPP__


#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class Form;

class PresidentialPardonForm : public Form
{
private:
	std::string target;
public:

	PresidentialPardonForm(std::string target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm & operator=(const PresidentialPardonForm &other);
	const std::string &getTarget() const;
	void setTarget(const std::string &target);
	void execute(const Bureaucrat &executor) const;
};



#endif
