#include <iostream>
#include <vector>

// Default is to pass by value and make a copy.

using namespace std;

void pass_by_value1 (int num);
void pass_by_value2 (string s);
void pass_by_value3 (vector<string> v);
void print_vector (vector< string> v);

void pass_by_value1 (int num) {
    num = 1000;
}

void pass_by_value2 (string s) {
    s = "Changed";
}

void pass_by_value3(vector<string> v) {
    v.clear(); //delete all vector elements
}

void print_vector (vector<string> v) {
    for (auto s: v)
        cout << s << " ";
    cout << endl;
}

int main() {
    
    int num {10};
    cout << "num before calling pass_by_value_1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value_1: " << num << endl; // don't get back 1000, working with local copy
    
    string name {"Keaton"};
    cout << "name before calling pass_by_value_2: " << name << endl;
    pass_by_value2(name);
    cout << "name after calling pass_by_value_2: " << name << endl; // don't get back changed, working with local copy
    
    vector<string> stooges {"Larry","Moe","Curly"};
    cout << "\nstooges before calling pass_by_value_3: ";
    print_vector(stooges);
    cout <<" \nstooges after calling pass_by_value_3: ";
    print_vector(stooges);
    
    return 0;
}
