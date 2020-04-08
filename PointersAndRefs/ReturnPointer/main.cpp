#include <iostream>

using namespace std;

int *create_array(size_t size, int init_value = 0) {
    int *new_storage {nullptr};
    new_storage = new int[size];     // dynamic allocation, pointer on the stack pointer to location on the heap. Don't lose pointer or else memory leak
    for (size_t i{0}; i < size; ++i)        // we lose pointer from function when function gets popped off the stack
        *(new_storage + i) = init_value;
    return new_storage;     // return pointer, essential that create_array is now that pointer in the heap so that we don't lose it
}

void display(const int *const array, size_t size) {
    for (size_t i{0}; i < size; ++i) {
        cout << array[i] << " ";
    cout << endl;
    }
}

int main() {
    
    int *my_array {nullptr};
    size_t size;
    int init_value {};
    
    cout << "How many integers would you like to allocate?";
    cin >> size;
    cout << "What value would you like them initialized to?";
    cin >> init_value;
    
    my_array = create_array(size, init_value);
    cout << "\n.........................................................." << endl;
    
    display(my_array, size);
    delete [] my_array;
    return 0;
}
