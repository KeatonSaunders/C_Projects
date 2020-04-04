#include <iostream>

using namespace std;

void print_array (const int arr[], size_t size);
void set_array (int arr[], size_t size, int value);

void print_array (const int arr[], size_t size) { // const so that can't change array
    for (size_t i{0}; i<size; ++i)
        cout << arr[i] << " ";
        cout << endl;
}

void set_array (int arr[], size_t size, int value) { 
    for (size_t i{0}; i<size; ++i)
        arr[i] = value;
}

int main() {
    int my_scores [] {100,98,90,86,84};
    
    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);
    
    return 0;
}
