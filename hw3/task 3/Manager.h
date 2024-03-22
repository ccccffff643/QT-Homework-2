#pragma once

#include "Employee.h"

class Manager: public Employee
{
private:
    double bonus;
public:
    Manager(/* args */);
    Manager(string name, int age, string address, double salary, double bonus);
    
    void setBonus(double bonus);

    double getBonus();
    
    void display();
};
