#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::setfill;
using std::setw;
using std::left;
using std::setprecision;

#include "Product.h"

Product::Product(){

    ID= "\0";
    Name= "\0";
    Price= 0.0;
    Quantity= 0;
}

Product::~Product(){


}

void Product::Input(){

    cin.ignore();
    // Input ID
    cout<< "Please Input the Product ID: ";
    getline(cin, ID);
    // Input Name
    cout<< "Please Input the Product Name: ";
    getline(cin, Name);
    // Input Price
    cout<< "Please Input the Product Price: ";
    cin>> Price;
    // Input Quantity
    cout<< "Please Input the Product Quantity: ";
    cin>> Quantity;
}

void Product::Output(){

    cout<< setfill(' ')<< left
        << setw(9)<< ID
        << setw(15)<< Name
        << setw(5)<< Price
        << setw(5)<< Quantity
        <<'\n';

}