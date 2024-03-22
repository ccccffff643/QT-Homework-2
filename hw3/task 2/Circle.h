#include "Shape.h"

class Circle: public Shape
{
private:
    double r;
public:
    Circle(/* args */);
    Circle(double r);

    virtual double perimeter() override;
    virtual double area() override;
};
