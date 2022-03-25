#include "RobotomyRequestForm.hpp"

//RobotomyRequestForm::RobotomyRequestForm(std::string targert) : Form("RobotomyRequestForm", 72, 45) {this->target = target;}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45), target(target){}

const std::string &RobotomyRequestForm::getTarget() const {return target;}

void RobotomyRequestForm::setTarget(const std::string &target){this->target = target;}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &sf)
: Form("RobotomyRequestForm", 72, 45), target(sf.getTarget()){}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &sf)
{
	setIsSigned(sf.getIsSigned());
	target = sf.getTarget();
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}


void RobotomyRequestForm::execute(const Bureaucrat &) const
{
	srand(100);
	if (rand() % 2)
		std::cout << target << " has been robotomized successfully !" << std::endl;
	else
		std::cout << target << " coult NOT be robotomized !" << std::endl;
}

