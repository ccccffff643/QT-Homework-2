#include <cmath>

#include "Triangle.h"
#include "Line.h"

Triangle::Triangle()
:   A(Point()),
    B(Point()),
    C(Point())
{
}
Triangle::Triangle(Point A, Point B, Point C)
:   A(A),
    B(B),
    C(C)
{

}
Triangle::~Triangle()
{

}

bool Triangle::isTriangle(){

    Line AB(A, B);
    Line BC(B, C);
    Line AC(A, C);

    return (AB.distance()+ BC.distance()> AC.distance()) && (AC.distance()+ BC.distance()> AB.distance());
}
double Triangle::perimeter(){

    Line AB(A, B);
    Line BC(B, C);
    Line AC(A, C);

    return AB.distance()+ BC.distance()+ AC.distance();
}
double Triangle::area(){

    double peri= this->perimeter()* 0.5;
    Line AB(A, B);
    Line BC(B, C);
    Line AC(A, C);

    return sqrt(peri* (peri- AB.distance())* (peri- BC.distance())* (peri- AC.distance()));
}