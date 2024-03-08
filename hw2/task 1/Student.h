#include <string>

using std::string;

class Student
{
private:
    
    string ID;
    string Name;
    double Score;

public:
    
    Student();
    Student(string id, string name);

    ~Student();
    
    void setID(const string id);
    void setName(const string name);
    void setScore(const double score);

    string getID();
    string getName();
    double getScore();
    string getGrade();

};
