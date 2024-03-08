#include <cmath>
#include "Point.h"

Point::Point()
    : x(),
      y()
{
}

Point::Point(double x, double y)
    : x(x),
      y(y)
{
}

Point::~Point()
{
}

void Point::setX(double x){

    this->x= x;
}

void Point::setY(double y){

    this->y= y;
}

void Point::setPoint(double x, double y){

    this->x= x;
    this->y= y;
}

double Point::getX(){

    return x;
}

double Point::getY(){

    return y;
}

double Point::distance(double x, double y){

    return sqrt(pow(abs(x- this->x), 2)+ pow(abs(y- this->y), 2));
}

double Point::distance(Point another){

    return sqrt(pow(abs(another.x- this->x), 2)+ pow(abs(another.y- this->y), 2));
}