#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137) {this->target = target;}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137), target(target){}

const std::string &ShrubberyCreationForm::getTarget() const {return target;}

void ShrubberyCreationForm::setTarget(const std::string &target){this->target = target;}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &sf)
: Form("ShrubberyCreationForm", 145, 137), target(sf.getTarget()){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &sf)
{
	setIsSigned(sf.getIsSigned());
	target = sf.getTarget();
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){};

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!getIsSigned())
		throw Form::FormNotSignedExeption(getName() + " can't be executed because it isn't signed !");
	if (executor.getGrade() > getExecuteGrade())
		throw Bureaucrat::GradeTooLowException(executor.getName()  + "doesn't have the required grade !");
	if (target.empty())
		std::cout << "form target isn't specified!" << "\n";
	else
	{
		std::ofstream out(target + "_shrubbery");

		out << "			&&& &&  & && \n";
		out << "		&& &\\/&\\|& ()|/ @, && \n";
		out << "		&\\/(/&/&||/& /_/)_&/_& \n";
		out << "	&() &\\/&|()|/&\\/ '%\" & () \n";
		out << "	&_\\_&&_\\ |& |&&/&__%_/_& && \n";
		out << "	&&   && & &| &| /& & % ()& /&& \n";
		out << "	()&_---()&\\&\\|&&-&&--%---()~ \n";
		out << "		&&     \\|||\n";
		out << "				|||\n";
		out << "				|||\n";
		out << "				|||\n";
		out << "		, -=-~  .-^- _\n";
		out << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
		out.close();
	}
}
