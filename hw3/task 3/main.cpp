#include <iostream>

using namespace std;

#include "Employee.h"
#include "Manager.h"
#include "Person.h"

int main(){

    Employee em1("Lin Jia-Hui", 24, "23, Da-an", 38000);
    Employee em2("Lee Zhe-Wei", 22, "12, LinShen street", 42000);
    Employee em3("Chen Zheng", 28,"2, Xinyi Street", 41000);

    em1.display();
    em2.display();
    em3.display();

    Manager ma1("Huang Shen", 32, "23 Yuan Dong street", 46000, 0.3);

    ma1.display();

    return 0;
}