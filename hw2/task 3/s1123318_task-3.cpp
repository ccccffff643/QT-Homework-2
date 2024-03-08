#include <iostream>

using namespace std;

#include "Math.h"

int main(){

    double  a= -6,
            b= 8,
            c[10]= {1, -2, 8, -5, 12, 9, 7, -4, 3, -6};
    int n= 5;

    cout<< "PI: "<< Math::getPI()<< '\n';
    cout<< "Absolute of A: "<< Math::abs(a)<< '\n';
    cout<< "Addition of A and B: "<< Math::add(a, b)<< '\n';
    cout<< "Subtraction of A and B: "<< Math::sub(a, b)<< '\n';
    cout<< "Minimum of A and B: "<< Math::min(a, b)<< '\n';
    cout<< "Maximum of A and B: "<< Math::max(a, b)<< '\n';
    cout<< "Average of A and B: "<< Math::avg(a, b)<< '\n';
    cout<< "A to the power of n is: "<< Math::pow(a, n)<< '\n';
    cout<< "Minimum of array C: "<< Math::min(c, n)<< '\n';
    cout<< "Maximum of array C: "<< Math::max(c, n)<< '\n';
    cout<< "Average of array C: "<< Math::avg(c, n)<< '\n';

    return 0;
}