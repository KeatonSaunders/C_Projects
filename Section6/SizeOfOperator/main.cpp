// Section 6
// Sizeof

#include <iostream>
#include <climits>

using namespace std;

int main() {
        cout << "Sizeof information" << endl;
        
    cout << "............................................" << endl;
    
    cout << "char: "<< sizeof(char) << " bytes" << endl;
    cout << "int: "<< sizeof(int) << " bytes" << endl;
    cout << "short: "<< sizeof(short) << " bytes" << endl;
    cout << "long: "<< sizeof(long) << " bytes" << endl;
    cout << "long long: "<< sizeof(long long) << " bytes" << endl;
    
    cout << "............................................" << endl;
    
    cout << "float: "<< sizeof(float) << " bytes" << endl;
    cout << "double: "<< sizeof(double) << " bytes" << endl;
    cout << "long double: "<< sizeof(long double) << " bytes" << endl;
    
    // Values defined in climits
    
    cout << "Minimum values";
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;
    
    cout << "............................................" << endl;
    
    int age {21};
    double wage {21.23};
    
    cout << sizeof(age) << endl;
    cout << sizeof(wage) << endl;
    
    return 0;
}
