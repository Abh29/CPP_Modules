#pragma once
#ifndef POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point
{

private:
    Fixed const *x;
    Fixed const *y;


public:
    Point(void);
    Point(const float x, const float y);
    Point(const Point &p);
    Point& operator = (const Point &p);
    ~Point();

	friend std::ostream& operator <<(std::ostream &os, Point const &p);

    Fixed   getX( void );
    Fixed   getY( void );
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
Fixed  *triangle_2_area(Point a, Point b, Point c);


#endif
