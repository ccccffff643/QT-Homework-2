#include "Rectangle.h"
Rectangle::Rectangle(/* args */)
{
}
Rectangle::Rectangle(double width, double height)
:   width(width),
    height(height)
{
}

bool Rectangle::isSquare(){

    return (width== height);
}
double Rectangle::perimeter(){

    return 2* (width+ height);
}
double Rectangle::area(){

    return width* height;
}