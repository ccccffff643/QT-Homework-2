#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct profile{

    string fullName;
    double score;
    string grade;
};

int main(){

    profile* temp;
    int n;
    string buf;
    while(cout<< "There are n testCases; n = " && getline(cin, buf)){
        n= stoi(buf);
        temp= new profile[n]();

        for(int i= 0 ; i< n; i++){

            cout<< "Please input fullName: ";
            getline(cin, temp[i].fullName);
            
            cout<< "Please input score: ";
            getline(cin, buf);
            temp[i].score= stod(buf);

            if(temp[i].score>= 9.0){

                temp[i].grade= "A";
            }
            else if(temp[i].score>= 8.0){

                temp[i].grade= "B+";
            }
            else if(temp[i].score>= 7.0){

                temp[i].grade= "B";
            }
            else if(temp[i].score>= 6.0){

                temp[i].grade= "C+";
            }
            else if(temp[i].score>= 5.0){

                temp[i].grade= "C";
            }
            else if(temp[i].score>= 4.5){

                temp[i].grade= "D+";
            }
            else if(temp[i].score>= 4.0){

                temp[i].grade= "D";
            }
            else{

                temp[i].grade= "F";
            }
        }

        // print results below
        cout<< setfill(' ')<< left
            << setw(18)<< "FULL NAME"
            << setw(11)<< "SCORE"
            << setw(12)<< "GRADE";
        cout<< "\n-----------------------------------------\n";
        for(int i= 0; i< n; i++){

            cout<< setfill(' ')
                << setw(18)<< temp[i].fullName
                << setw(11)<< temp[i].score
                << setw(12)<< temp[i].grade
                << '\n';
        }
    }
}