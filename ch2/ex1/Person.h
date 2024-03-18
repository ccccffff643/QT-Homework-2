#ifndef PERSON
#define PERSON

#include <string>

using std::string;

class Person
{
protected:
    string name;
    int age;
    string address;

public:
    Person();
    Person(string name, int age, string address);
    ~Person();

    void setName(string name);
    void setAge(int age);
    void setAddress(string address);

    string getName();
    int getAge();
    string getAddress();

    void display();
};
#endif