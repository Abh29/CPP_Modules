#include "Fixed.hpp"

Fixed::Fixed(void){number = 0;}

Fixed::Fixed(const int a){
	number = a * 256;
}

Fixed::Fixed(const float f){
	number = (int) roundf(f * 256);
}

Fixed::~Fixed(void){
}

Fixed::Fixed(const Fixed &f) { 
	*this = f;}

Fixed& Fixed::operator = (const Fixed &a) {
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

bool operator <(Fixed const &a, Fixed const &b){return (a.getRawBits() < b.getRawBits());}
bool operator >(Fixed const &a, Fixed const &b){return (a.getRawBits() > b.getRawBits());}
bool operator <=(Fixed const &a, Fixed const &b){return (a.getRawBits() <= b.getRawBits());}
bool operator >=(Fixed const &a, Fixed const &b){return (a.getRawBits() >= b.getRawBits());}
bool operator ==(Fixed const &a, Fixed const &b){return (a.getRawBits() == b.getRawBits());}
bool operator !=(Fixed const &a, Fixed const &b){return (a.getRawBits() != b.getRawBits());}

Fixed Fixed::operator + (const Fixed &a){
	Fixed b;
	b.setRawBits(this->number + a.getRawBits());
	return (b);
}

Fixed Fixed::operator - (const Fixed &a){
	Fixed b;
	b.setRawBits(this->number - a.getRawBits());
	return (b);
}

Fixed Fixed::operator / (const Fixed &a){
	Fixed b = Fixed((float) number / a.getRawBits());
	return (b);
}

Fixed Fixed::operator * (const Fixed &a){
	Fixed b;
	b.setRawBits(this->number * a.getRawBits() / 256);
	return (b);
}


Fixed Fixed::operator ++(){
	this->number++;
	return (*this);
}

Fixed Fixed::operator --(){
	this->number--;
	return (*this);
}

Fixed Fixed::operator ++(int){
	Fixed a = Fixed(*this);
	this->number++;
	return (a);
}

Fixed  Fixed::operator --(int){
	Fixed a = Fixed(*this);
	this->number--;
	return (a);
}


const Fixed&  Fixed::min(const Fixed& a, const Fixed& b){
	return (a.getRawBits() <= b.getRawBits() ? a : b);
}

const Fixed&  Fixed::max(const Fixed& a, const Fixed& b){
	return (a.getRawBits() >= b.getRawBits() ? a : b);
}

Fixed&  Fixed::min(Fixed&  a, Fixed&  b){
	return (a.getRawBits() <= b.getRawBits() ? a : b);
}

Fixed&  Fixed::max(Fixed&  a, Fixed&  b){
	return (a.getRawBits() >= b.getRawBits() ? a : b);
}

