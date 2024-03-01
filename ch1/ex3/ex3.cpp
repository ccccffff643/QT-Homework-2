#include <iostream>
#include <iomanip>

using namespace std;

#include "Product.h"

int main(){

    size_t testCase;
    while(cout<< "Input the value of testcase: " && cin>> testCase){

        Product* arr= new Product[testCase]();
        cout<< "===== Input Start =====\n";

        cout<< "\n\n";

        for(size_t i= 0; i< testCase; i++){

            arr[i].Input();
        }

        cout<< "\n\n";
        
        cout<< "===== Input End =====\n";
        
        cout<< "===== Output Start =====\n";

        
        cout<< "\n\n";

        // print table title
        cout<< setfill(' ')<< left
            << setw(9)<< "ID"
            << setw(15)<< "Name"
            << setw(5)<< "Age"
            << setw(5)<< "Score"
            << '\n';
        
        cout<< "===================================\n";

        for(size_t i= 0; i< testCase; i++){

            arr[i].Output();
        }

        cout<< "\n\n";
        
        cout<< "===== Output End =====\n";
        delete[] arr;
    }
}