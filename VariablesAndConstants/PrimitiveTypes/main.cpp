#include <iostream>

using namespace std;

int main() {
    
    char middle_initial {'K'};
    cout << "My middle initial is " << middle_initial << endl;
    
    unsigned short int exam_score {85};
    cout << "My exam score was " << exam_score << endl;
    
    int countries_represented {65};
    cout << "There were " << countries_represented << " countries represented in my meeting." << endl;
    
    long people_in_southafrica {55000000};
    cout << "There are about " << people_in_southafrica << " people in South Africa." << endl;
    
    long long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "The distance to alpha centauri is about " << distance_to_alpha_centauri << " kms." << endl;
    
    float car_payment {401.23};
    cout << "My car payment is " << car_payment << endl;
    
    double pi {3.14159};
    cout << "The number pi is " << pi << endl;
    
    long double large_amount {2.7e120};
    cout << large_amount << " is a very large number." << endl;
    
    bool game_over {false};
    cout << "The value of game_over is " << game_over << endl;
    
//    Example of an oveflow problem
//    short value1 {3000};
//    short value2 {1000};
//    short product {value1 * value2};
//    cout << "The product of value 1 and 2 is " << product << endl;
    
    return 0;
}
