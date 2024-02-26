#include <iostream>

using namespace std;

int main(){

    int* arr;
    int n;
    while(cout<< "Please input n: " && cin>> n){
        
        arr= new int[n]();
        for(int idx= 0; idx< n; idx++){

            cin>> arr[idx];
        }

        for(int idx= n- 1; idx>= 0; idx--){

            cout<< arr[idx]<< ' ';
        }
        cout<< '\n';
        delete[] arr;
    }
}