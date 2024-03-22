#pragma once

#include <string>

using std::string;

class Person
{
private:
    
    string name;
    int age;
    string address;

public:
    
    Person(/* args */);
    Person(string name, int age, string address);

    void setName(string name);
    void setAge(int age);
    void setAddress(string address);

    string getName();
    int getAge();
    string getAddress();

    void display();
};
