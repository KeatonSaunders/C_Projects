#include <iostream>

using namespace std;

int main() {
    
    int scores [] {100, 95, 89, 68, -1};
    int *score_ptr {scores};
    
    while (*score_ptr != -1) {
        cout << *score_ptr << endl;
        score_ptr++; // increments by the size of int
    }
    
    cout << "\n........................................................" << endl;
    score_ptr = scores;
    while (*score_ptr != -1)
        cout << *score_ptr++ << endl; // these operators both have the same precedence
                                                          // therefore look at associativity which is righ to left
                                                          // the code will therefore dereference the pointer and then increment the pointer
    
    cout << "\n........................................................" << endl;
    string s1 {"Keaton"};
    string s2 {"Keaton"};
    string s3 {"Frank"};
    
    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};
    
    cout << boolalpha;
    cout << p1 << " == " << p2 << ": " << (p1==p2) << endl;   //false
    cout << p1 << " == " << p3 << ": " << (p1==p3) << endl;   //true
    
    cout << *p1 << " == " << *p2 << ": " << (*p1==*p2) << endl;   //true
    cout << *p1 << " == " << *p3 << ": " << (*p1==*p3) << endl;   //true
    
    p3 = &s3; // point to frank
    
    cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl;   // false
    
    
    cout << "\n........................................................" << endl;
    char name [] {"Keaton"};
    
    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};
    
    char_ptr1 = &name[0]; // K
    char_ptr2 = &name[5]; //n
    
    cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;
    
    return 0;
}