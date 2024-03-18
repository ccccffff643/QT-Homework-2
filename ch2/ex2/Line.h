#ifndef LINE
#define LINE

#include "Point.h"

class Line: public Point
{
private:
    Point A;
    Point B;
public:
    Line();
    Line(Point A, Point B);
    ~Line();

    double distance();
};

#endif