#pragma once
#ifndef __KAREN_HPP__
#define __KAREN_HPP__

#include <iostream>

class Karen
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	Karen(/* args */);
	~Karen();
	void	complain(std::string level );
};

typedef  void (Karen::*karen_f) (void);

#endif

/*
You are going to automate Karen. It won’t be difficult since she always says the same
things. You have to create a Karen class with the following private member functions:
• void debug( void );
• void info( void );
• void warning( void );
• void error( void );
Karen also has a public member function that calls the four member functions above
depending on the level passed as parameter:
void complain( std::string level );
The goal of this exercise is to use pointers to member functions. This is not a
suggestion. Karen has to complain without using a forest of if/else if/else. She doesn’t
think twice!
Create and turn in tests to show that Karen complains a lot. You can use the example
comments.
*/