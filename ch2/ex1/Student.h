#include "Person.h"
#include <string>
using std::string;

class Student: public Person
{
protected:
    
    double gpa;
public:
    
    Student(string name, int age, string address, double gpa);
    ~Student();

    void setGpa(double gpa);
    double getGpa();

    void display();
};
