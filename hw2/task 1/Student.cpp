#include "Student.h"

Student::Student()
    : ID(),
      Name(),
      Score()
{
}

Student::Student(string id, string name)
    : ID(id),
      Name(name),
      Score()
{
}

Student::~Student()
{
}

void Student::setID(const string id){

    ID= id;
}

void Student::setName(const string name){

    Name= name;
}

void Student::setScore(const double score){

    if(score> 10){

        Score= 10;
    }
    else if(score< 0){

        Score= 0;
    }
    else{

        Score= score;
    }
}

string Student::getID(){

    return ID;
}

string Student::getName(){

    return Name;
}

double Student::getScore(){

    return Score;
}

string Student::getGrade(){

    if(Score>= 9.0){

        return "A";
    }
    else if(Score>= 8.0){

        return "B+";
    }
    else if(Score>= 7.0){

        return "B";
    }
    else if(Score>= 6.0){

        return "C+";
    }
    else if(Score>= 5.0){

        return "C";
    }
    else if(Score>= 4.5){

        return "D+";
    }
    else if(Score>= 4.0){

        return "D";
    }
    else{

        return "F";
    }
}
