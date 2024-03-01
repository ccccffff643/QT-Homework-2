#include <iostream>
#include <iomanip>

using namespace std;

#include "Books.h"

int main(){

    size_t testCase;
    while(cout<< "Input the value of testcase: " && cin>> testCase){

        Books* arr= new Books[testCase]();
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
            << setw(9)<< "Code"
            << setw(15)<< "Name"
            << setw(15)<< "Publisher"
            << setw(5)<< "NumPage"
            << setw(5)<< "Price"
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