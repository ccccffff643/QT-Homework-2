#include <iostream>
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main(){

    Student s("Lin Jia-Hao", 23, "52 Lide Street", 9.0);
    s.display();

    Teacher t("Chen Zhu-Wei", 35, "12 ShongShan Road", 42000);
    t.display();
}