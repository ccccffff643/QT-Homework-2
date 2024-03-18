#include "Person.h"
#include <string>
using std::string;

class Teacher: public Person
{
protected:
    double salary;
public:
    Teacher(string name, int age, string address, double salary);
    ~Teacher();

    void setSalary(double salary);
    double getSalary();
    void display();
};
