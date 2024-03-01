#ifndef STUDENT
#define STUDENT

#include <string>

using std::string;

class Student
{
private:
    string ID;
    string Name;
    int Age;
    double Score;
public:
    Student();
    ~Student();
    void Input();
    void Output();
};

#endif