#include <iostream>
#include <iomanip>      // for prettier output

using namespace std;

#include "Student.h"

int main(){

    /* TestCase List */
    
    const int testCase= 3;
    const string idList[3]= {"s1129999", "s1128888", "s1127777"};
    const string nameList[3]= {"Alice Wang", "Bob Chen", "Cathy Yeh"};
    const double scoreList[3]= {15.0, -1.0, 6};
    
    /* =============== */

    Student* studentList= new Student[testCase]();

    // set basic info by constructor
    for(int i= 0; i< testCase; i++){

        studentList[i]= Student(idList[i], nameList[i]);
    }

    // output result generate by constructor
    cout<< "\n\n"
        << setfill(' ')<< left
        << setw(12)<< "Stu-ID"
        << setw(15)<< "Stu-Name"
        << '\n';
    cout<< "=======================================\n";
    for(int i= 0; i< testCase; i++){

        cout<< setfill(' ')<< left
            << setw(12)<< studentList[i].getID()
            << setw(15)<< studentList[i].getName()
            << '\n';
    }

    // set score by setters
    for(int i= 0; i< testCase; i++){

        studentList[i].setScore(scoreList[i]);
    }


    // output result generate by setter
    cout<< "\n\n"
        << setfill(' ')<< left
        << setw(12)<< "Stu-ID"
        << setw(15)<< "Stu-Name"
        << setw(7)<< "Score"
        << setw(5)<< "Grade"
        << '\n';
    cout<< "=======================================\n";
    for(int i= 0; i< testCase; i++){

        cout<< setfill(' ')<< left
            << setw(12)<< studentList[i].getID()
            << setw(15)<< studentList[i].getName()
            << setw(7)<< studentList[i].getScore()
            << setw(5)<< studentList[i].getGrade()
            << '\n';
    }
}
