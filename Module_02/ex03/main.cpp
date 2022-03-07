#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main( void ) {
    Point a;
    Point b(0, 2);
    Point c (2, 0);

    Point p1(0, 1);
    Point p2(1, 1);
    Point p3(2, 3);

    std::cout << "a : " << a << "  b : " << b << "  c : " << c << std::endl;
    std::cout << "p : " << p1 << "  =>  " << bsp(a, b, c, p1) << std::endl;
    std::cout << "p : " << p2 << "  =>  " << bsp(a, b, c, p2) << std::endl;
    std::cout << "p : " << p3 << "  =>  " << bsp(a, b, c, p3) << std::endl;

    return 0;
}
