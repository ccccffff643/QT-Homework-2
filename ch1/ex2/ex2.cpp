#include <iostream>
#include <iomanip>

using namespace std;

#include "Rectangle.h"

int main(){

    size_t testCase;
    while(cout<< "Input the value of testcase: " && cin>> testCase){

        Rectangle* arr= new Rectangle[testCase]();
        cout<< "===== Input() Start =====\n";
        cout<< "\n\n";

        for(size_t i= 0; i< testCase; i++){

            arr[i].Input();
        }
        
        cout<< "\n\n";

        cout<< "===== Input() End =====\n";
        
        cout<< "===== Draw() Start =====\n";

        cout<< "\n\n";
        
        for(size_t i= 0; i< testCase; i++){

            arr[i].Draw();
        }
        
        cout<< "\n\n";

        cout<< "===== Draw() End =====\n";
        
        cout<< "===== Area() Start =====\n";
        
        cout<< "\n\n";

        for(size_t i= 0; i< testCase; i++){

            cout<< "The Area of this Rectangle is: "
                << setprecision(2)<<arr[i].Area()<< '\n';
        }

        cout<< "\n\n";

        cout<< "===== Area() End =====\n";
        
        cout<< "===== Perimeter() Start =====\n";

        cout<< "\n\n";
        
        for(size_t i= 0; i< testCase; i++){

            cout<< "The Perimeter of this Rectangle is: "
                << setprecision(2)<<arr[i].Perimeter()<< '\n';
        }
        
        cout<< "\n\n";

        cout<< "===== Perimeter() End =====\n";

        delete[] arr;
    }
}