#include <iostream>
#include "MyString.h"

using namespace std;

int main() {
    
    MyString empty;            // no args constructor
    MyString Larry{"Larry"};   // overloaded constructor
    MyString stooge {Larry};   // copy constructor
    
    empty.display();
    Larry.display();
    stooge.display();
   
    cout << endl;
    return 0;
}