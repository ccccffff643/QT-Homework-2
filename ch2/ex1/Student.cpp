#include "Student.h"

#include <iostream>
#include <iomanip>
using std::cout;
using std::setfill;
using std::setw;
using std::left;

Student::Student(string name, int age, string address, double gpa){

    this->name= name;
    this->age= age;
    this->address= address;
    this->gpa= gpa;
} 
Student::~Student()
{
}

void Student::setGpa(double gpa){

    this->gpa= gpa;
}
double Student::getGpa(){

    return this->gpa;
}

void Student::display(){

    cout<< setfill(' ')<< left
        << setw(9)<< "Name: "
        << this->name
        << '\n'
        << setw(9)<< "Age: "
        << this->age
        << '\n'
        << setw(9)<< "Address: "
        << this->address
        << '\n'
        << setw(9)<< "Gpa: "
        << this->gpa
        << '\n';
}