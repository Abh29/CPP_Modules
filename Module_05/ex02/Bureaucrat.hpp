#pragma once
#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
protected:
	std::string const	name;
	int					grade;
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& a);
	Bureaucrat& operator= (const Bureaucrat& a);
	~Bureaucrat();


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

	friend std::ostream& operator <<(std::ostream &os, Bureaucrat const &b);
	Bureaucrat  operator ++();
	Bureaucrat  operator --();
	Bureaucrat  operator ++(int);
	Bureaucrat  operator --(int);

	void signForm(Form &f);
	std::string getName() const;
	int	getGrade() const;
};

#endif
