#include <iostream>

using namespace std;

int main() {
    
    char vowels [] {'a','e','i','o','u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;
    //cin >> vowels[5] would cause program to crash. Reading into unknown location
    
    int test_scores [5] {100,95,90,88,82};
    cout << "First score at index 1 is: " << test_scores[0] << endl;
    test_scores[0] = 99;
    cout << "First score at index 1 is now: " << test_scores[0] << endl;
    
    int temps [5] {0}; // note will contain garbage data until initialized
    cout << "Temp at index 1 is: " << temps[0] << endl;
    cout << "Temp at index 2 is: " << temps[1] << endl;
    cout << "Temp at index 3 is: " << temps[2] << endl;
    cout << "Temp at index 4 is: " << temps[3] << endl;
    cout << "Temp at index 5 is: " << temps[4] << endl;
    
    cout << "Enter 5 temperatures: " << endl;
    cin >> temps[0];
    cin >> temps[1];
    cin >> temps[2];
    cin >> temps[3];
    cin >> temps[4];
    
    cout << "Temp at index 1 is: " << temps[0] << endl;
    cout << "Temp at index 2 is: " << temps[1] << endl;
    cout << "Temp at index 3 is: " << temps[2] << endl;
    cout << "Temp at index 4 is: " << temps[3] << endl;
    cout << "Temp at index 5 is: " << temps[4] << endl;
    
    cout << "Notice that the name of the array is " << temps << endl;
    
//    int high_score_per_level [10] {3,5}; //initializes first two elements of array
//    const int days_in_year {365};
//    double high_temperatures [days_in_year] {0}; //init all to zero
//    int another_array [] {1,2,3,4,5};
//    cin >> test_scores[0];
//    test_scores[0] = 90;

// *********************************************************************************
//  Multidimensional arrays

    const int rows {3};
    const int cols {4};
    int movie_rating [rows][cols] 
    {
        {0,4,3,5},
        {2,3,3,5},
        {1,4,4,5}
    };
    
    
    return 0;
}
