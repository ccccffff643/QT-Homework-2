#include <iostream>
#include <string>

using std::cout;
using std::string;

class Animal
{
    private:
        string name;
        double speed;
        int feet;
    public:
        Animal();
        Animal(string name, double speed, int feet);
        void display();
        double getSpeed();
};

Animal::Animal()
{
}

Animal::Animal(string name, double speed, int feet)
:   name(name),
    speed(speed),
    feet(feet)
{
}

void Animal::display(){

    if(!this->feet){

        cout<< this->name<< " has no feet!\n";
    }
    else{

        cout<< this->name<< " has "<< this->feet<< " feet!\n";
    }
}

double Animal::getSpeed(){

    return this->speed;
}

int main(){

    // assign    
    Animal Cat("Cat", 48, 4);
    Animal Bird("Bird", 390, 2);
    Animal Fish("Fish", 12, 0);
    
    cout<< '\n';
    // display
    Cat.display();
    Bird.display();
    Fish.display();

    cout<< '\n';
    // speed comparison
    cout<< "Speed comparison:\n";
    if(Cat.getSpeed()> Bird.getSpeed() && Cat.getSpeed()> Fish.getSpeed()){

        cout<< "Cat > ";
        if(Bird.getSpeed()> Fish.getSpeed()){

            cout<< "Bird > Fish\n";
        }
        else{

            cout<< "Fish > Bird\n";
        }
    }
    else if(Bird.getSpeed()> Cat.getSpeed() && Bird.getSpeed()> Fish.getSpeed()){

        cout<< "Bird > ";
        if(Cat.getSpeed()> Fish.getSpeed()){

            cout<< "Cat > Fish\n";
        }
        else{

            cout<< "Fish > Cat\n";
        }
    }
    else{

        cout<< "Fish > ";
        if(Cat.getSpeed()> Bird.getSpeed()){

            cout<< "Cat > Bird\n";
        }
        else{

            cout<< "Bird > Cat\n";
        }
    }
}
