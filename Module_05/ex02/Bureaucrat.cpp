#include "Bureaucrat.hpp"

	Bureaucrat::Bureaucrat(std::string name, int grade) : name(name){
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException(name + " grade too HIGH !");
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException(name + " grade too LOW !");
		this->grade = grade;
		std::cout << "Bureaucrat constructor" << std::endl;
	}

	Bureaucrat::Bureaucrat(const Bureaucrat& a) : name(a.name) {
		grade = a.grade;
		std::cout << "Bureaucrat copy constructor" << std::endl;
	}

	Bureaucrat& Bureaucrat::operator= (const Bureaucrat& a){
		this->grade = a.grade;
		return (*this);
	}

	Bureaucrat::~Bureaucrat(){
		std::cout << "Bureaucrat destructor " << name <<  std::endl;
	}

	Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string &msg) : _msg(msg){}
	Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string& msg) : _msg(msg){}
	const char* Bureaucrat::GradeTooHighException::what() const throw() {return _msg.c_str();}
	const char* Bureaucrat::GradeTooLowException::what() const throw() {return _msg.c_str();}

	Bureaucrat::GradeTooHighException::~GradeTooHighException() throw (){}
	Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){}

	Bureaucrat Bureaucrat::operator ++(){
		if (this->grade == 1)
			throw Bureaucrat::GradeTooHighException("you can increment the highest grade !");
		this->grade--;
		return (*this);
	}

	Bureaucrat Bureaucrat::operator --(){
		if (this->grade == 150)
			throw Bureaucrat::GradeTooLowException("you can decrement the lowest grade !");
		this->grade++;
		return (*this);
	}

	Bureaucrat Bureaucrat::operator ++(int){
		if (this->grade == 1)
			throw Bureaucrat::GradeTooHighException("you can increment the highest grade !");
		Bureaucrat a = Bureaucrat(*this);
		this->grade--;
		return (a);
	}

	Bureaucrat  Bureaucrat::operator --(int){
		if (this->grade == 150)
			throw Bureaucrat::GradeTooLowException("you can decrement the lowest grade !");
		Bureaucrat a = Bureaucrat(*this);
		this->grade++;
		return (a);
	}

	std::ostream& operator <<(std::ostream &os, Bureaucrat const &b)
	{
		os << b.name << ", bureaucrat grade " << b.grade;
		return (os);
	}

	std::string	Bureaucrat::getName() const {return name;}
	int	Bureaucrat::getGrade() const {return grade;}

	void putReason(Bureaucrat &b, Form &f, std::string reason)
	{
		std::cout << b.getName() << " couldn't sign " << f.getName() << " because : " << reason << std::endl;
	}

	void Bureaucrat::signForm(Form &f){
		if (f.getIsSigned())
			putReason(*this, f, " is already signed !");
		else
		{
			try
			{
				f.beSigned(*this);
				std::cout << this->name << " signs " << f.getName() << "\n";
			}
			catch (std::exception &e)
			{
				putReason(*this, f, e.what());
			}
		}
	}
