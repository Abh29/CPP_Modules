#pragma once
#ifndef __FORM_HPP__
#define __FORM_HPP__


#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat ;

class Form
{
private:
	std::string const	name;
	bool				_isSigned;
	int const			sign_grade;
	int const			execute_grade;


public:
	Form(std::string name, int sign_grade, int execute_grade);
	Form(const Form& a);
	Form& operator= (const Form& a);
	~Form();


	friend std::ostream& operator <<(std::ostream &os, Form const &b);

	void	beSigned(Bureaucrat &b);
	void	beExecuted(Bureaucrat &b);

	void	setIsSigned(bool b);
	std::string const getName() const;
	int  	getSignGrade() const;
	int 	getExecuteGrade() const;
	bool		getIsSigned() const;

	virtual void execute(Bureaucrat const & executor) const = 0;




	class GradeTooHighException : public std::exception
	{
	private:
		std::string _msg;
	public:
		GradeTooHighException(const std::string& msg);
		virtual ~GradeTooHighException() throw ();

		virtual const char* what() const throw ();
	}; 


	class GradeTooLowException : public std::exception
	{
	private:
		std::string _msg;
	public:
		GradeTooLowException(const std::string& msg);
		~GradeTooLowException() throw ();
		virtual const char* what() const throw ();
	};


	class FormNotSignedExeption : public std::exception
	{
	private:
		std::string _msg;
	public:
		FormNotSignedExeption(const std::string& msg);
		virtual ~FormNotSignedExeption() throw ();

		virtual const char* what() const throw ();
	}; 


};

#endif
