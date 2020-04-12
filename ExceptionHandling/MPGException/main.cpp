//#include <iostream>
//
//using namespace std;
//
//int main() {
//    
//    int miles {};
//    int gallons {};
//    double miles_per_gallon {};
//    
//    cout << "Enter the miles driven: " << endl;
//    cin >> miles;
//    cout << "Enter the gallons used: " << endl;
//    cin >> gallons;
//    
//    try {
//        if (gallons == 0)
//            throw 0;
//        miles_per_gallon = static_cast<double>(miles) / gallons;
//        cout << "Result: " << miles_per_gallon << endl;
//    }
//    catch (int &ex) {
//        cerr << "Sorry, you can't divide by zero." << endl;
//    }
//    
//    cout << "Bye" << endl;
//
//    return 0;
//}

#include <iostream>
void func_a();
void func_b();
void func_c();
 
void func_a() {
    std::cout << "Starting func_a" << std::endl;
    func_b();
    throw 3000;
    std::cout << "Ending func_a" << std::endl;
}
 
void func_b() {
    std::cout << "Starting func_b" << std::endl;
    func_c();
    throw 2000;
    std::cout << "Ending func_b" << std::endl;
}
 
void func_c()  {
    std::cout << "Starting func_c" << std::endl;
    throw 1000;
    std::cout << "Ending func_c" << std::endl; 
}
 
int main() {    
    try {
        func_a();
    } catch(int &ex) {
        std::cerr << "Caught error thrown: " << ex << std::endl;
    }
    std::cout << "Continuing in main" << std::endl;
    return 0;
}