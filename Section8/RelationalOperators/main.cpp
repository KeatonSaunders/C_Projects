#include <iostream>

using namespace std;

int main() {
    
    int num1 {}, num2 {};
    cout << boolalpha;
//    
//    cout << "Enter two integers separated by a space: " << endl;
//    cin >> num1 >> num2;
//    
//    cout << num1 << " > " << num2 << ": " << (num1>num2) << endl;
//    cout << num1 << " >= " << num2 << ": " << (num1>=num2) << endl;
//    cout << num1 << " < " << num2 <<  ": " << (num1<num2) << endl;
//    cout << num1 << " <= " << num2 << ": " << (num1<=num2) << endl;
    
    const int lower {10};
    const int upper {20};
    
    cout << "Enter an integer that is higher than " << lower << endl;
    cin >> num1;
    cout << num1 << " > " << lower << " is " << (num1>lower) << endl;
    
    cout << "Enter an integer that is less than or equal to " << upper << endl;
    cin >> num2;
    cout << num2 << " <= " << upper << " is " << (num2<=upper) << endl;
    
    return 0;
}
