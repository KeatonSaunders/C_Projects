#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print (int);
void print (double);
void print (string);
void print (string, string);
void print (vector <string>);

void print (int num) {
    cout << " Printing int: " << num << endl;
}

void print (double num) {
    cout << " Printing double: " << num << endl;
}

void print (string s) {
    cout << " Printing string: " << s << endl;
}

void print (string s, string t) {
    cout << " Printing 2 strings: " << s << " & " << t << endl;
}

void print (vector <string> v) {
    cout << " Printing vector of strings: " << endl;
    for (auto s: v)
        cout << s + " ";
    cout << endl;
}

int main() {
    
//    print(100);
//    print('A'); // characters are always promoted to integers - 65 is the ASCII code for A
    
//    print(123.5);
//    print (123.3F); // Float gets promoted to a double
    
    print("C-style string"); // c-style string converted to c++ string
    string s {"C++ string"};
    print(s);
    
    print ("C-style string",s);
    
    vector<string> three_stooges {"Larry,Joe,Molly"};
    
    print(three_stooges);
    
    // don't have to think about print int, print string etc, just think print. 
    // this is what abstraction is all about.
    // have to be a bit careful with default arguments
    
    return 0;
}
