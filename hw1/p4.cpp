#include <iostream>

using namespace std;

int F(int n){

    if(n== 0 || n== 1){

        return 1;
    }
    return F(n- 2)+ F(n- 1);
}

int main(){

    int n;
    while(cout<< "Input n: " && cin>> n){

        if(n< 0){

            continue;
        }
        for(int i= 0; i< n; i++){

            cout<< F(i)<< ' ';
        }
        cout<< '\n';
    }
}