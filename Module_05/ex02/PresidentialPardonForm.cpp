#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5) {this->target = target;}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 145, 137), target(target){}

const std::string &PresidentialPardonForm::getTarget() const {return target;}

void PresidentialPardonForm::setTarget(const std::string &target){this->target = target;}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &sf)
: Form("PresidentialPardonForm", 25, 5), target(sf.getTarget()){}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &sf)
{
	setIsSigned(sf.getIsSigned());
	target = sf.getTarget();
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}


void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (!getIsSigned())
		throw Form::FormNotSignedExeption(getName() + " can't be executed because it isn't signed");
	if (executor.getGrade() > getExecuteGrade())
		throw Bureaucrat::GradeTooLowException(executor.getName()  + "doesn't have the required grade !");
	std::cout  << target << " has been pardoned by Zafod Beeblebrox." << "\n";
}
