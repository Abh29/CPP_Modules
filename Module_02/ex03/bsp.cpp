#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point){

    Fixed   *abc = triangle_2_area(a, b, c);
    Fixed   *pab = triangle_2_area(point, a, b);
    Fixed   *pbc = triangle_2_area(point, b, c);
    Fixed   *pac = triangle_2_area(point, a, c);

    bool out = (*abc >= (*pab + *pac + *pbc));

    delete abc;
    delete pab;
    delete pac;
    delete pbc;

    return (out);
}

//(1/2) |x1(y2 − y3) + x2(y3 − y1) + x3(y1 − y2)|

Fixed* triangle_2_area(Point a, Point b, Point c){

    Fixed *sarea = new Fixed(a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getX() - a.getY()) + c.getX() * (a.getY() - b.getY()));
    Fixed *out = new Fixed(abs(*sarea));
    delete sarea;
    return (out);
}
