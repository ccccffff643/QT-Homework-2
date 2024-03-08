#include <iostream>

using namespace std;

#include "Book.h"

int main(){

    Book b1("C++ Primer, 5th Edition", "Stanley B. Lippman");
    Book b2("Object-Oriented Programming Simplified", "Hari Mohan Pandey");
    Book b3("Design Patterns in Modern C++", "Dmitri Nesteruk");

    b1.setQuantity(5);
    b2.setQuantity(2);
    b3.setQuantity(4);

    string title;
    int quantity;
    while(true){

        cout<< "Please input book title: ";
        getline(cin, title);
        cout<< "Please input quantity: ";
        cin>> quantity;
        
        // TODO CODE
        cin.ignore();

        if(title== b1.getTitle()){

            if(b1.getQuantity()- quantity< 0){

                cout<< "The quantity is not enough. Please try again!\n";
            }
            else{

                cout<< "Success!\n";
                b1.setQuantity(b1.getQuantity()- quantity);
            }
        }
        else if(title== b2.getTitle()){

            if(b2.getQuantity()- quantity< 0){

                cout<< "The quantity is not enough. Please try again!\n";
            }
            else{

                cout<< "Success!\n";
                b2.setQuantity(b2.getQuantity()- quantity);
            }
        }
        else if(title== b3.getTitle()){

            if(b3.getQuantity()- quantity< 0){

                cout<< "The quantity is not enough. Please try again!\n";
            }
            else{

                cout<< "Success!\n";
                b3.setQuantity(b3.getQuantity()- quantity);
            }
        }
        else{

            cout<< "Book not found\n";
        }
    }
}