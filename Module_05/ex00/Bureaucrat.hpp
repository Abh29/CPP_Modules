#pragma once
#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>
#include <exception>

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

	const std::string 	getName() const;
	int					getGrade() const;
	void				increment();
	void				decrement();
};

#endif

/*
Let’s design an artificial nightmare of offices, corridors, forms, and waiting queues.
Sounds fun? No? Too bad.
First, start by the smallest cog in this vast bureaucratic machine: the Bureaucrat.
A Bureaucrat must have:
• A constant name.
• And a grade that ranges from 1 (highest possible grade) to 150 (lowest possible
grade).
Any attempt to instantiate a Bureaucrat using an invalid grade must throw an ex-
ception:
either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.
5
C++ - Module 05 Repetition and Exceptions
You will provide getters for both these attributes: getName() and getGrade(). Im-
plement also two member functions to increment or decrement the bureaucrat grade. If
the grade is out of range, both of them will throw the same exceptions as the constructor.
Remember. Since grade 1 is the highest one and 150 the lowest,
incrementing a grade 3 should give a grade 2 to the bureaucrat.
The thrown exceptions must be catchable using try and catch blocks:



You will implement an overload of the insertion («) operator to print something like
(without the angle brackets):
<name>, bureaucrat grade <grade>.
As usual, turn in some tests to prove everything works as expected
*/
