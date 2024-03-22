#pragma once

#include "Person.h"

class Employee: public Person
{
private:
    double salary;
    static int count;
public:
    Employee(/* args */);
    Employee(string name, int age, string address, double salary);
    
    void setSalary(double salary);

    double getSalary();
    static int getCount();

    void display();
};
