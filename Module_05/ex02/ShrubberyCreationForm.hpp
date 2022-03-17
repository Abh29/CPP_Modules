#pragma once
#ifndef __SHRUBBERYCREATIONFORM_HPP__
#define __SHRUBBERYCREATIONFORM_HPP__


#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

class Bureaucrat;
class Form;

class ShrubberyCreationForm : public Form
{
private:
	std::string target;
public:

	ShrubberyCreationForm(std::string target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm & operator=(const ShrubberyCreationForm &other);
	const std::string &getTarget() const;
	void setTarget(const std::string &target);
	void execute(const Bureaucrat &executor) const;
};



#endif