#include <cmath>
#include "Triangle.h"

using std::sqrt;

Triangle::Triangle()
{
}
Triangle::Triangle(double a, double b, double c)
:   a(a),
    b(b),
    c(c)
{
}
bool Triangle::isTriangle(){

    return (a< (b+ c)) && ((a+ b)> c) && ((a+ c)> b);
}
double Triangle::perimeter(){

    return a+ b+ c;
}
double Triangle::area(){

    double s= this->perimeter()/ 2;

    return sqrt(s* (s- a)* (s- b)* (s- c));
}