#include <iostream>
#include <iomanip>
#include "Person.h"

using std::cout;
using std::left;
using std::setw;
using std::setfill;

Person::Person(/* args */)
{    
}
Person::Person(string name, int age, string address)
:   name(name),
    age(age),
    address(address)

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

    cout<< left<< setfill(' ')
        << setw(15)<< this->name
        << setw(5)<< this->age
        << setw(20)<< this->address
        <<'\n';
}