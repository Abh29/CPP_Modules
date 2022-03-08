#include "test.hpp"

A::A(int x){this->x = x; std::cout << "A constructor called !" << std::endl; }
A::~A(){std::cout << "A distructor called !" << std::endl;}
int	A::getX(void){std::cout << x << std::endl; return (x);}
A& A::operator=(const A& a){
	this->x = a.x;
	std::cout << "A assignment operator called !" << std::endl;
	return (*this);
}

bool A::operator== (const A& a){
	std::cout << "A == operator " << (x == a.x) << std::endl;
	return (x == a.x);
}



B::B(int y){this->y = y; std::cout << "B constructor called !" << std::endl; }
B::~B(){std::cout << "B distructor called !" << std::endl; }
int B::getY(){std::cout << y << std::endl; return (y);}

B& B::operator=(const B& b){
	this->y = -b.y;
	std::cout << "B assignment operator called !" << std::endl;
	return (*this);
}

bool B::operator== (const B& b){
	std::cout << "B == operator " << (y == b.y) << std::endl;
	return (y == b.y);
}


C::C(int z) : A(z), B(2 * z) 
{this->z = z; std::cout << "C constructor called !" << std::endl; }
C::~C(){std::cout << "C distructor called !" << std::endl; }