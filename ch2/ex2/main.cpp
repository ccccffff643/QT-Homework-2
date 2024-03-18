#include <iostream>

using namespace std;

#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"

int main(){

    Point A(3, 4);
    Point B(5, 6);
    Point C(3, 2);
    Point D(1, 4);

    Line line(A, B);
    cout<< "Distance: "<< line.distance()<< '\n';

    Triangle tri(A, B, C);
    if(tri.isTriangle()){

        cout<< "ABC is Triangle !\n";
        cout<< "Perimeter: "<< tri.perimeter()<< '\n';
        cout<< "Area: "<< tri.area()<< '\n';
    }

    else{

        cout<< "ABC is not a Triangle!\n";
    }

    Rectangle rec(A, B, C, D);
    cout<< "Perimeter: "<< rec.perimeter()<< '\n';
    cout<< "Area: "<< rec.area()<< '\n';
}