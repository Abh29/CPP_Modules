#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	number;
	static const int bits = 8;


public:
	Fixed();
	Fixed (const Fixed &f);


    Fixed & operator = (const Fixed &a);
	~Fixed();


	int getRawBits( void ) const;
	void setRawBits( int const raw );
};


#endif