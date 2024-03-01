#include <iostream>
#include <iomanip>
#include <string>

// I/O
using std::cout;
using std::cin;
// prettier stufffff
using std::setfill;
using std::left;
using std::setw;
using std::setprecision;

// Class stufffff
#include "Student.h"

Student::Student()
{
    ID= "\0";
    Name= "\0";
    Age= 0;
    Score= 0.0;
}

Student::~Student()
{
    // ID.clear();
    // Name.clear();
}

void Student::Input(){

    cin.ignore();

    // Input ID
    cout<< "Please Input the Student\'s ID: ";
    getline(cin, ID);
    // Input Name
    cout<< "Please Input the Student\'s Name: ";
    getline(cin, Name);
    // Input Age
    cout<< "Please Input the Student\'s Age: ";
    cin>> Age;
    // Input Score
    cout<< "Please Input the Student\'s Score: ";
    cin>> Score;
}

void Student::Output(){

    // print contents
    cout<< setfill(' ')<< left
        << setw(9)<< ID
        << setw(15)<< Name
        << setw(5)<< Age
        << setw(5)<< setprecision(2)<< Score;

}