#include <iostream>

using namespace std;

int main() {
    
    bool equal_result {false};
    bool not_equal_result {false};
 
//    int num1 {}, num2 {};
//    
//    cout << boolalpha;
//    
//    cout << "Enter two integers separated by a space: " << endl;
//    cin >> num1 >> num2;
//    
//    equal_result = (num1 == num2);
//    not_equal_result = (num1 != num2);
//    
//    cout << "Comparison result (equals): " << equal_result << endl;
//    cout << "Comparison result (not equals): " << not_equal_result << endl;
    
//    char num1 {}, num2 {};
//    
//    cout << boolalpha;
//    
//    cout << "Enter two characters separated by a space: " << endl;
//    cin >> num1 >> num2;
//    
//    equal_result = (num1 == num2);
//    not_equal_result = (num1 != num2);
//    
//    cout << "Comparison result (equals): " << equal_result << endl;
//    cout << "Comparison result (not equals): " << not_equal_result << endl;
    
//    double num1 {}, num2 {};
//    
//    cout << boolalpha;
//    
//    cout << "Enter two doubles separated by a space: " << endl;
//    cin >> num1 >> num2;
//    
//    equal_result = (num1 == num2);
//    not_equal_result = (num1 != num2);
//    
//    cout << "Comparison result (equals): " << equal_result << endl;
//    cout << "Comparison result (not equals): " << not_equal_result << endl;

    double double1 {};
    int num1 {};
    
    cout << boolalpha;
    
    cout << "Enter an integer and a double separated by a space: " << endl;
    cin >> num1 >> double1;
    
    equal_result = (num1 == double1); // the integer gets promoted to  double before comparison is done
    not_equal_result = (num1 != double1);
    
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;  

    
    return 0;
}
