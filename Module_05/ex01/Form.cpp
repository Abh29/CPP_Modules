#include "Form.hpp"

	Form::Form(std::string name, int sign_grade, int execute_grade) : name(name), sign_grade(sign_grade), execute_grade(execute_grade) {
		if (sign_grade < 1 || execute_grade < 1)
			throw Form::GradeTooHighException(name + " grade too HIGH !");
		if (sign_grade > 150 || execute_grade > 150)
			throw Form::GradeTooLowException(name + " grade too LOW !");
		this->_isSigned = false;
		std::cout << "Form constructor" << std::endl;
	}

	Form::Form(const Form& a) : name(a.name), sign_grade(a.sign_grade), execute_grade(a.execute_grade){
		_isSigned = a._isSigned;
		std::cout << "Form copy constructor" << std::endl;
	}

	Form& Form::operator= (const Form& a){
		this->_isSigned = a._isSigned;
		return (*this);
	}

	Form::~Form(){
		std::cout << "Form destructor " << name <<  std::endl;
	}

	Form::GradeTooHighException::GradeTooHighException(const std::string &msg) : _msg(msg){}
	Form::GradeTooLowException::GradeTooLowException(const std::string& msg) : _msg(msg){}
	const char* Form::GradeTooHighException::what() const throw() {return _msg.c_str();}
	const char* Form::GradeTooLowException::what() const throw() {return _msg.c_str();}

	Form::GradeTooHighException::~GradeTooHighException() throw (){}
	Form::GradeTooLowException::~GradeTooLowException() throw(){}

	std::ostream& operator <<(std::ostream &os, Form const &f)
	{
		os << f.name << ", Form signing grade " << f.sign_grade;
		os << ", executing grade " << f.execute_grade;
		os << ", is siged " << f._isSigned;
		return (os);
	}

	void 	Form::beSigned(Bureaucrat &b)
	{
		b.signForm(*this);
	}

	void				Form::setIsSigned(bool b){_isSigned = b;}
	std::string const	Form::getName() const {return name;}
	int		 			Form::getSignGrade() const {return sign_grade;}
	int 	 			Form::getExecuteGrade() const {return execute_grade;}
	bool				Form::getIsSigned() const {return _isSigned;}