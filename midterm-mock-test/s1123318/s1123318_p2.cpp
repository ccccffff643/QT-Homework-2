#include <iostream>
#include <string>
#include <iomanip>

using std::string;
using std::cout;
using std::left;
using std::setfill;
using std::setw;

class Employee{

    private:
        
        string name;
        int age;
        double salary;
        static int count;
    
    public:
        
        Employee(string name, int age, double salary);
        Employee(const Employee& employee);
        void display();
        double getSalary();
        static int getCount();
};

Employee::Employee(string name, int age, double salary)
:   name(name),
    age(age),
    salary(salary)
{
    count++;
}

Employee::Employee(const Employee& employee)
:   name(employee.name),
    age(employee.age),
    salary(employee.salary)
{
    count++;
}

void Employee::display(){

    cout<< setfill(' ')<< left
        << setw(20)<< this->name
        << setw(5)<< this->age
        << setw(10)<< this->salary
        << '\n';
}

double Employee::getSalary(){

    return this->salary;
}

int Employee::getCount(){

    return count;
}

// static variable init
int Employee::count= 0;

int main(){

    Employee em1("Lin Jia-Hui", 28, 40000);
    Employee em2("Le Sang", 24, 38000);
    Employee em3("Yang Zhe-Wei", 26, 45000);

    cout<< '\n';
    // display
    cout<< "> EMPLOYEE LIST: \n";
    cout<< setfill(' ')<< left
        << setw(20)<< "Name"
        << setw(5)<< "Age"
        << setw(10)<< "Salary"
        << '\n';
    cout<< "-----------------------------------\n";
    em1.display();
    em2.display();
    em3.display();

    cout<< '\n';
    // sorting?
    cout<< "> EMPLOYEE LIST AFTER SORTING: \n";
    cout<< setfill(' ')<< left
        << setw(20)<< "Name"
        << setw(5)<< "Age"
        << setw(10)<< "Salary"
        << '\n';
    cout<< "-----------------------------------\n";
    if(em1.getSalary()> em2.getSalary() && em1.getSalary()> em3.getSalary()){

        if(em2.getSalary()> em3.getSalary()){

            em3.display();
            em2.display();
        }
        else{

            em2.display();
            em3.display();
        }
        em1.display();
    }
    else if(em2.getSalary()> em1.getSalary() && em2.getSalary()> em3.getSalary()){

        if(em1.getSalary()> em3.getSalary()){

            em3.display();
            em1.display();
        }
        else{

            em1.display();
            em3.display();
        }
        em2.display();
    }
    else{

        if(em1.getSalary()> em2.getSalary()){

            em2.display();
            em1.display();
        }
        else{

            em1.display();
            em2.display();
        }
        em3.display();
    }
}