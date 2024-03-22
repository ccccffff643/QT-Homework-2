#include <iostream>

using namespace std;

#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

int main(){

    Triangle tri(3, 4, 5);
    if(tri.isTriangle()){
        
        cout<< "This is a triangle!\n";
        cout<< "Perimeter:"<< tri.perimeter()<< '\n';
        cout<< "Area:"<< tri.area()<< '\n';
    }
    else{

        cout<< "This is not a triangle\n";
    }
    Rectangle rec(8, 8);
    if(rec.isSquare()){
        
        cout<< "This is a square\n";
    }
    else{
        
        cout<< "This is not a square\n";
    }
    cout<< "Perimeter:"<< rec.perimeter()<<'\n';
    cout<< "Area:"<< rec.area()<< '\n';
    Circle cir(2.4);
    cout<< "Perimeter:"<< cir.perimeter()<< '\n';
    cout<< "Area:"<< cir.area()<< '\n';
    return 0;
}