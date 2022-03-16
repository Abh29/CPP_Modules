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

/*

Now that you have bureaucrats, let’s give them something to do. What better activity
could there be than the one of filling out a stack of forms?
Then, let’s make a Form class. It has:
• A constant name.
• A boolean indicating whether it is signed (at construction, it’s not).
• A constant grade required to sign it.
• And a constant grade required to execute it.
All these attributes are private, not protected.
The grades of the Form follow the same rules that apply to the Bureaucrat. Thus,
the following exceptions will be thrown if a form grade is out of bounds:
Form::GradeTooHighException and Form::GradeTooLowException.
Same as before, write getters for all attributes and an overload of the insertion («)
operator that prints all the form’s informations.

Add also a beSigned() member function to the Form that takes a Bureaucrat as
parameter. It changes the form status to signed if the bureaucrat’s grade is high enough
(higher or egal to the required one). Remember, grade 1 is higher than grade 2.
If the grade is too low, throw a Form::GradeTooLowException.
Lastly, add a signForm() member function to the Bureaucrat. If the form got signed,
it will print something like:
<bureaucrat> signed <form>
Otherwise, it will print something like:
<bureaucrat> couldn’t sign <form> because <reason>.
Implement and turn in some tests to ensure everything works as expected
*/