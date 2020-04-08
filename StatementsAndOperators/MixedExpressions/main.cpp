#include <iostream>

using namespace std;

int main() {
    
    int total {};
    int num1 {}, num2 {}, num3 {};
    
    const int count {3};
    
    cout << "Enter 3 integers separated by spaces: " << endl;
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double average {0.0};
    
    average = static_cast <double> (total) / count;
    // average = (double)total/count; Old-Style
    
    cout << "The three numbers were " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sum of the three numbers is " << total << "." << endl;
    cout << "The average of the three numbers is " << average << "." << endl;
    
    return 0;
}
