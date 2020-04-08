#include <iostream>

using namespace std;

int main() {
    
    int *int_ptr {nullptr};
    int_ptr = new int; // storage is allocated on the heap and address stored in int_ptr
    cout << int_ptr << endl; // this is the memory location on the heap
    delete int_ptr; // frees up the storage
    
    size_t size {0};
    double *temp_ptr {nullptr}; // temp_ptr is on the stack because it's local to main
    
    cout << "How many temps? ";
    cin >> size;
    
    temp_ptr = new double [size]; // allocates a contiguous block of memory in form of an array
    cout << temp_ptr << endl; // location of the first of however many doubles are in the array
    
    delete [] temp_ptr; // you don't want to lose your pointer to dynamically allocated memory because that's a mempry leak
                                   // this could occur by setting temp_ptr to nullptr
    
    
    cout << endl;
    return 0;
}
