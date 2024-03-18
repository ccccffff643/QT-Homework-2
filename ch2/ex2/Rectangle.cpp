#include <cmath>

#include "Rectangle.h"
#include "Line.h"

Rectangle::Rectangle()
:   A(Point()),
    B(Point()),
    C(Point()),
    D(Point())
{

}
Rectangle::Rectangle(Point A, Point B, Point C, Point D)
:   A(A),
    B(B),
    C(C),
    D(D)
{

}
Rectangle::~Rectangle()
{

}

bool Rectangle::isSquare(){

    Line AB(A, B);
    Line BC(B, C);
    Line CD(C, D);

    return (AB.distance()== BC.distance()== CD.distance());
}
double Rectangle::perimeter(){

    Line AB(A, B);
    Line BC(B, C);
    Line CD(C, D);
    Line AD(A, D);

    return AB.distance()+ BC.distance()+ CD.distance()+ AD.distance();
}
double Rectangle::area(){

    if(isSquare()){

        return perimeter()* perimeter()/ 16;
    }
    Line AB(A, B);
    return ((perimeter()/ 2)- AB.distance())* AB.distance();
}