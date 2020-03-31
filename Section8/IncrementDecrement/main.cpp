#include <iostream>

// increments or decrements operand by 1
// can be used for integers, floating point types and pointers
// prefix ++num or postfix num++
// don't use twice for same variable in same statement - undefined.

using namespace std;

int main() {
    
//    Example 1
//    int counter {10};
//    int result {0};
//    
//    cout << "Counter: " << counter << endl;
//    
//    counter = counter + 1;
//    cout << "Counter: " << counter << endl;
//    
//    counter++;
//    cout << "Counter: " << counter << endl;
//    
//    ++counter;
//    cout << "Counter: " << counter << endl;


//    Example 2
//    int counter {10};
//    int result {0};
//    
//    cout << "Counter: " << counter << endl;
//    
//    result = ++counter;
//    
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;

//    Example 3
    int counter {10};
    int result {0};
    
    cout << "Counter: " << counter << endl;
    
    result = ++counter;
    
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    return 0;
}
