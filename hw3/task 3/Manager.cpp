#include <iostream>
#include <iomanip>

#include "Manager.h"

using std::cout;
using std::left;
using std::setw;
using std::setfill;

Manager::Manager(/* args */)
{
}
Manager::Manager(string name, int age, string address, double salary, double bonus){

    setName(name);
    setAge(age);
    setAddress(address);
    this->bonus= bonus;
    setSalary((1+ bonus)* salary);
}

void Manager::setBonus(double bonus){

    this->bonus= bonus;
}

double Manager::getBonus(){

    return this->bonus;
}

void Manager::display(){

    cout<< left<< setfill(' ')
        << setw(15)<< getName()
        << setw(5)<< getAge()
        << setw(20)<< getAddress()
        << setw(10)<< getSalary()
        <<setw(10)<< this->bonus
        <<'\n';
}