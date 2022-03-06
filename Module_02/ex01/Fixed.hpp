#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	number;
	static const int bits = 8;


public:
	Fixed();
	Fixed(const int a);
	Fixed(const float f);
	Fixed (const Fixed &f);


    Fixed & operator = (const Fixed &a);
	friend std::ostream& operator <<(std::ostream &os, Fixed const &m);
	~Fixed();


	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;
	std::string toString(void);

};


#endif