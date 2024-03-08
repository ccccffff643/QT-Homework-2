#include <float.h>

#include "Math.h"

const double Math::PI= 3.14159;

Math::Math()
{
}
Math::~Math()
{
}

double Math::getPI(){

    return Math::PI;
}
double Math::abs(double a){

    return a> 0? a: -a;
}
double Math::add(double a, double b){

    return a+ b;
}
double Math::sub(double a, double b){

    return a- b;
}
double Math::min(double a, double b){

    return a> b? b: a;
}
double Math::max(double arr[], int n){

    double t_max= DBL_MIN;
    for(int i= 0; i< n; i++){

        if(arr[i]> t_max){

            t_max= arr[i];
        }
    }
    return t_max;
}
double Math::max(double a, double b){

    return a> b? a: b;
}
double Math::min(double arr[], int n){

    double t_min= DBL_MAX;
    for(int i= 0; i< n; i++){

        if(arr[i]< t_min){

            t_min= arr[i];
        }
    }
    return t_min;
}
double Math::pow(double x, int n){
    if(n== 0){

        return 1;
    }
    return x* pow(x, n- 1);
}
double Math::avg(double a, double b){

    return (a+ b)/ 2;
}

double Math::avg(double arr[], int n){

    if(n<= 0){

        return 0;
    }

    double sum= 0;
    for(int i= 0; i< n; i++){

        sum+= arr[i];
    }
    
    return (sum/ n);
}
