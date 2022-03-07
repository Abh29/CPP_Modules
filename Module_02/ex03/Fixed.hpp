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
	
	friend bool operator <(Fixed const &a, Fixed const &b);
	friend bool operator >(Fixed const &a, Fixed const &b);
	friend bool operator <=(Fixed const &a, Fixed const &b);
	friend bool operator >=(Fixed const &a, Fixed const &b);
	friend bool operator ==(Fixed const &a, Fixed const &b);
	friend bool operator !=(Fixed const &a, Fixed const &b);

    Fixed operator + (const Fixed &a);
	Fixed operator - (const Fixed &a);
	Fixed operator / (const Fixed &a);
	Fixed operator * (const Fixed &a);

	Fixed  operator ++();
	Fixed  operator --();
	Fixed  operator ++(int);
	Fixed  operator --(int);

	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;
	std::string toString(void);

	static const	Fixed&  min(const Fixed& a, const Fixed& b);
	static const	Fixed&  max(const Fixed& a, const Fixed& b);
	static			Fixed&  min(Fixed&  a, Fixed&  b);
	static			Fixed&  max(Fixed&  a, Fixed&  b);

};

Fixed abs(Fixed &f);

#endif