#ifndef RECTANGLE
#define RECTANGLE

#include "Point.h"

class Rectangle
{
private:
    Point A;
    Point B;
    Point C;
    Point D;
public:
    Rectangle();
    Rectangle(Point A, Point B, Point C, Point D);
    ~Rectangle();

    bool isSquare();
    double perimeter();
    double area();
};
#endif
