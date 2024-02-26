#include <iostream>
#include <iomanip>

using namespace std;

int s0(int n){

    if(n== 1){

        return 1;
    }
    return n* s0(n- 1);
}

double s1(int n){

    if(n== 1){

        return 1.0;
    }
    return (1.0/ n)+ s1(n- 1);
}

double s2(int n){

    if(n== 1){

        return 1.0;
    }
    return (1.0/ s0(n))+ s2(n- 1);
}

int main(){

    double num;
    while(cin>> num){

        cout<< fixed<< setprecision(2)<< "S0 = "<< s0(num)<< '\n';
        cout<< fixed<< setprecision(2)<< "S1 = "<< s1(num)<< '\n';
        cout<< fixed<< setprecision(2)<< "S2 = "<< s2(num)<< '\n';
    }
}