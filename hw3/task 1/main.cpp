#include <iostream>

using namespace std;

#include "Animal.h"
#include "Cow.h"
#include "Cat.h"
#include "Dog.h"
#include "Human.h"


int main(){

    Animal animal;
    animal.speak();
    Dog dog;
    dog.speak();
    Cat cat;
    cat.speak();
    Cow cow;
    cow.speak();
    Human human;
    human.speak();
    return 0;
}