#include "Shape.h"

class Rectangle: public Shape
{
private:
    
    double width;
    double height;
public:
    
    Rectangle(/* args */);
    Rectangle(double width, double height);

    bool isSquare();
    virtual double perimeter() override;
    virtual double area() override;
};
