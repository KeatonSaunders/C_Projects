#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1 (int &num);
void pass_by_ref2 (string &s);
void pass_by_ref3 (vector<string> &v);
void print_vector (const vector<string> &v); // const

void pass_by_ref1 (int &num) {
    num = 1000;
}

void pass_by_ref2 (string &s) {
    s="Changed";
}

void pass_by_ref3 (vector<string> &v) {
    v.clear();
}

void print_vector (const vector<string> &v) { // makes reference read only
    for (auto s: v)
        cout << s << " ";
        cout << endl;
}

int main() {
    
    int num {10};
    cout << "\nnum before calling pass_by_ref1: " << num << endl;
    pass_by_ref1(num);
    cout << "num after calling pass_by_ref1: " << num << endl; // changed
    
    string name {"Keaton"};
    cout << "\nname before calling pass_by_ref2: " << name << endl;
    pass_by_ref2(name);
    cout << "name after calling pass_by_ref2: " << name << endl; // changed -
    
    vector<string> stooges {"Larry","Moe","Curly"};
    cout << "\nstooges before calling pass_by_ref3: ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout <<"stooges after calling pass_by_ref3: ";
    print_vector(stooges);
    cout << endl;
    
    // sometimes pass by value is expensive so you want to pass by value and qualify it as a constant
    
    return 0;
}
