#include <iostream>

using namespace std;

#include "Point.h"

int main(){

    Point p1(1.5, 6.7);
    Point p2(2.8, 3.2);
    cout<< p1.distance(p2)<< '\n';
    cout<< p1.distance(2.34, 7.8)<< '\n';

    return 0;
}