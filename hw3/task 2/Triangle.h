#include "Shape.h"

class Triangle: public Shape
{
private:
    
    double a;
    double b;
    double c;
public:
    
    Triangle();
    Triangle(double a, double b, double c);
    bool isTriangle();
    virtual double perimeter() override;
    virtual double area() override;
};
