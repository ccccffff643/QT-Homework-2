#include "Person.h"

#include <iostream>
#include <iomanip>
using std::cout;
using std::setfill;
using std::setw;
using std::left;

Person::Person()
:   name(string()),
    age(int()),
    address(string())
{
}
Person::Person(string name, int age, string address)
:   name(name),
    age(age),
    address(address)
{
}

Person::~Person()
{
}

void Person::setName(string name){

    this->name= name;
}
void Person::setAge(int age){

    this->age= age;
}
void Person::setAddress(string address){

    this->address= address;
}

string Person::getName(){

    return this->name;
}
int Person::getAge(){

    return this->age;
}
string Person::getAddress(){

    return this->address;
}

void Person::display(){

    cout<< setfill(' ')<< left
        << setw(9)<< "Name: "
        << this->name
        << setw(9)<< "Age: "
        << this->age
        << setw(9)<< "Address: "
        << this->address
        << '\n';
}