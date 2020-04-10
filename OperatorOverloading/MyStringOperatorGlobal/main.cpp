#include <iostream>
#include <vector>
#include "MyString.h"

using namespace std;

int main() {
    cout << boolalpha << endl;
    
    MyString larry {"Larry"};
    MyString moe {"Moe"};
    
    MyString stooge = larry;
    larry.display();
    moe.display();
    
    cout << (larry == moe) << endl;
    cout << (larry == stooge) << endl;
    
//    MyString stooges = larry + "Moe";
    MyString stooges = "Larry" + moe;
    
    MyString two_stooges = moe + " " + "Larry";
    two_stooges.display();
    
    MyString three_stooges = moe + " " + "Larry" + " " + "Curly";
    three_stooges.display();
    
    return 0;
}