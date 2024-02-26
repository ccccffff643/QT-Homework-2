#include <iostream>

using namespace std;

int main(){

    int a, b, c, buf;
    while(cin>> a>> b>> c){

        if(a> b){

            buf= a;
            a= b;
            b= buf;
        }// a< b
        if(a> c){

            buf= a;
            a= c;
            c= buf;
        }// a< c
        if(b> c){

            buf= b;
            b= c;
            c= buf;
        }// b< c

        cout<< a<< ' '<< b<< ' '<< c<< '\n';
    }
}