#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::setfill;
using std::setw;
using std::left;
using std::setprecision;

#include "Books.h"

Books::Books(){

    Code= "\0";
    Name= "\0";
    Publisher= "\0";

    NumPage= 0;
    Price= 0.0;
}

Books::~Books(){


}

void Books::Input(){

    cin.ignore();
    // Input the Book's Code
    cout<< "Please Input the Book\'s Code: ";
    getline(cin, Code);
    // Input the Book's Name
    cout<< "Please Input the Book\'s Name: ";
    getline(cin, Name);
    // Input the Book's Publisher
    cout<< "Please Input the Book\'s Publisher: ";
    getline(cin, Publisher);
    // Input the Book's NumPage
    cout<< "Please Input the Book\'s NumPage: ";
    cin>> NumPage;
    // Input the Book's Price
    cout<< "Please Input the Book\'s Price: ";
    cin>> Price;
}

void Books::Output(){

    cout<< setfill(' ')<< left
        << setw(9)<< Code
        << setw(15)<< Name
        << setw(15)<< Publisher
        << setw(5)<< NumPage
        << setw(5)<< Price
        << '\n';
}