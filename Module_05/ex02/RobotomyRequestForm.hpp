#pragma once
#ifndef __ROBOTOMYREQUESTFORM_HPP__
#define __ROBOTOMYREQUESTFORM_HPP__


#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class Form;

class RobotomyRequestForm : public Form
{
private:
	std::string target;
public:

	RobotomyRequestForm(std::string target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &other);
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm & operator=(const RobotomyRequestForm &other);
	const std::string &getTarget() const;
	void setTarget(const std::string &target);
	void execute(const Bureaucrat &executor) const;
};



#endif