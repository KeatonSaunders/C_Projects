#include <iostream>

using namespace std;

int main() {
    
    int num1 {10}; // this is initialization
    int num2 {20};
    
    //num1 = 100; // this is an assigment statement
    // C++ does type checking at compile time as opposed to runtime in python, ruby etc
    
    num1 = num2 = 1000;
    // 100 = num1 won't work because assigning a variable to a literal
    
    cout << "First number is " << num1 << endl;
    cout << "Second number is " << num2 << endl;
    
    int newnum1 {100};
    int newnum2 {200};
    
    cout << newnum1 << " + " << newnum2 << " = " << newnum1+newnum2 << endl;
    
    cout << newnum2 << " / " << newnum1 << " = " << newnum2/newnum1 << endl;
    
    cout << newnum1 << " / " << newnum2 << " = " << newnum1/newnum2 << endl;
    
    num1 = 10;
    num2 = 3;
    
    cout << num1 << " % " << num2 << " = " << num1%num2 << endl;
    
    

    return 0;
}
