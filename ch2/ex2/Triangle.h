#ifndef TRIANGLE
#define TRIANGLE

#include "Point.h"

class Triangle
{
private:
    Point A;
    Point B;
    Point C;
public:
    Triangle();
    Triangle(Point A, Point B, Point C);
    ~Triangle();

    bool isTriangle();
    double perimeter();
    double area();
};

#endif
