#include "Fixed.hpp"

Fixed::Fixed(void){
	number = 0;
	std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const int a){
	number = a * 256;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f){
	number = (int) roundf(f * 256);
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed &f) { 
	std::cout << "Copy constructor called" << std::endl; 
	*this = f;}

Fixed& Fixed::operator = (const Fixed &a) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(a.getRawBits());
    return *this;
}

std::ostream& operator <<(std::ostream &os, Fixed const &m) { 
    return os << m.toFloat();
}

int		Fixed::getRawBits(void) const {
	return (number);
	}
void	Fixed::setRawBits(int const raw) {number = raw;}

float	Fixed::toFloat( void ) const {
	return ((float) number / 256);
}

int		Fixed::toInt( void ) const {
	return (number / 256);
}
