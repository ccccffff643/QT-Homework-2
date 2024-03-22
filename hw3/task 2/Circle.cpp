#include "Circle.h"

#define pi 3.14

Circle::Circle(/* args */)
{
}
Circle::Circle(double r)
:   r(r)
{
}

double Circle::perimeter(){

    return 2* pi* r;
}
double Circle::area(){

    return r* r* pi;
}