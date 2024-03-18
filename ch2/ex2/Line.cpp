#include "Line.h"
#include <cmath>

Line::Line()
:   A(Point()),
    B(Point())
{
}
Line::Line(Point A, Point B){

    this->A= A;
    this->B= B;
}
Line::~Line()
{
}

double Line::distance(){

    return sqrt((A.getX()- B.getX())* (A.getX()- B.getX())+ (A.getY()- B.getY())* (A.getY()- B.getY()));
}