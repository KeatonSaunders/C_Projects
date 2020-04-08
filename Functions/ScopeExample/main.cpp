#include <iostream>

using namespace std;

// scoping is lexical so it's as you read the code

void local_example();
void global_example();
void static_local_example();

int num {300}; // global variable

void global_example() {
    cout << "Global num is: " << num << " in global_example - start" << endl;
    num *= 2;
    cout << "Global num is: " << num << " in global_example - end" << endl;
}

void local_example(int x) {
    int num {1000}; // local
    cout << "\nLocal num is: " << num << " in local example - start" << endl;
    num=x;
    cout << "\nLocal num is: " << num << " in local example - end" << endl;
    // num1 is in main not within scope
}

void static_local_example() {
    static int num {5000}; // local to static_local_example - retains its value between calls
    cout << "\nLocal static num is " << num << " in static_local_example - start" << endl;
    num += 1000;
    cout << "\nLocal static num is " << num << " in static_local_example - end" << endl;
}

int main() {
    
    int num {100}; // local to main
    int num1 {500}; //local to main
    
    cout << "Local num is: " << num << " in main" << endl;
    
    { // creates a new level of scope 
    int num {200}; // local to this inner block
    cout << "Local num is: " << num << " in inner block in main" << endl;
    cout << "Inner block in main can see out - num 1 is: " << num1 << endl;
    }
    
    cout << "Local num is: " << num << " in main" << endl;
    
    local_example(10);
    
    global_example();
    
    static_local_example();
    static_local_example(); // behaves like global variable but scope is local
    
    
    return 0;
}
