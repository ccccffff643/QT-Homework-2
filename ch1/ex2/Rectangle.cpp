#include <iostream>

using std::cin;
using std::cout;

#include "Rectangle.h"

Rectangle::Rectangle(){

    Width= 0;
    Length= 0;
}

Rectangle::~Rectangle(){


}

void Rectangle::Input(){

    // Input Width
    cout<< "Please Input Rectangle\'s Width: ";
    cin>> Width;

    // Input Length
    cout<< "Please Input Rectangle\'s Length: ";
    cin>> Length;

}

void Rectangle::Draw(){

    // isFill== True

    cout<< "\n// Rectangle filled with *\n\n";

    for(int b_len= 0; b_len< Length; b_len++){

        for(int b_wid= 0; b_wid< Width; b_wid++){

            cout<< '*';
        }
        cout<< '\n';
    }
    
    // isFill== False

    cout<< "\n// Rectangle filled with space\n\n";

    for(int b_len= 0; b_len< Length; b_len++){

        for(int b_wid= 0; b_wid< Width; b_wid++){
            if(b_len== 0 || b_len== Length- 1 || b_wid== 0 || b_wid== Width- 1){

                cout<< '*';
                continue;
            }

            cout<< ' ';
        }
        cout<< '\n';
    }
}

double Rectangle::Area(){

    return Width* Length;
}

double Rectangle::Perimeter(){

    return 2* (Width+ Length);
}