#include <iostream>
#include <iomanip>
#include "Employee.h"

using std::cout;
using std::left;
using std::setw;
using std::setfill;

int Employee::count= 0;

Employee::Employee(/* args */)
{
}
Employee::Employee(string name, int age, string address, double salary){

    setName(name);
    setAge(age);
    setAddress(address);
    this->salary= salary;
    count++;
}

void Employee::setSalary(double salary){

    this->salary= salary;
}

double Employee::getSalary(){

    return this->salary;
}
int Employee::getCount(){

    return count;
}

void Employee::display(){

    cout<< left<< setfill(' ')
        << setw(15)<< getName()
        << setw(5)<< getAge()
        << setw(20)<< getAddress()
        << setw(10)<< this->salary
        <<'\n';
}
