#include "Teacher.h"

#include <iostream>
#include <iomanip>
using std::cout;
using std::setfill;
using std::setw;
using std::left;

Teacher::Teacher(string name, int age, string address, double salary){

    this->name= name;
    this->age= age;
    this->address= address;
    this->salary= salary;
}
Teacher::~Teacher(){


}

void Teacher::setSalary(double salary){

    this->salary= salary;
}
double Teacher::getSalary(){

    return this->salary;
}
void Teacher::display(){

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
        << setw(9)<< "Salary: "
        << this->salary
        << '\n';
}