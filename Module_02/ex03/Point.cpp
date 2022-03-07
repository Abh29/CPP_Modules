#include "Point.hpp"

Point::Point(void){
   x = new Fixed(0);
   y = new Fixed(0);
}

Point::Point(const float x, const float y){
    this->x = new Fixed(x);
    this->y = new Fixed(y);
}

Point::Point(const Point &p){
    x = new Fixed(*p.x);
    y = new Fixed(*p.y);
}

Point& Point::operator= (const Point &p)
{
    if ( &p != this)
    {
        delete x;
        delete y;

        x = new Fixed(*p.x);
        y = new Fixed(*p.y);
    }

    return (*this);
}

Point::~Point(void){
    delete x;
    delete y;
}


Fixed   Point::getX(void){
    return (*x);
}

Fixed   Point::getY(void){
    return (*y);
}


std::ostream& operator <<(std::ostream &os, Point const &p){
    return os << "(" << *p.x << " , " << *p.y << ")";
}