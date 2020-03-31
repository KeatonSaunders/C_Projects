#include <iostream>

using namespace std;

int main() {
    
//    int num {};
//    const int lower {10};
//    const int upper {20};
//    
//    cout << boolalpha;
//    
//    cout << "Enter an integer - the bounds are " << lower << " and " << upper << endl;
//    cin >> num;
//    
//    bool within_bounds {false};
//    
//    within_bounds = (num>lower && num<upper);
//    
//    cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;
    
//    int num {};
//    const int lower {10};
//    const int upper {20};
//    
//    cout << boolalpha;
//    
//    cout << "Enter an integer - the bounds are " << lower << " and " << upper << endl;
//    cin >> num;
//    
//    bool within_bounds {false};
//    
//    within_bounds = (num<lower || num>upper);
//    
//    cout << num << " is outside " << lower << " and " << upper << ": " << within_bounds << endl;

    cout << boolalpha;
    bool wear_coat {false};
    double temperature {};
    int wind_speed{};
    
    const int windspeed_for_coat {25};
    const double temperature_for_coat {45};
    
    cout << "Enter the current temperature (F): " << endl;
    cin >> temperature;
    cout << "Enter the current windspeed (mph): " << endl;
    cin >> wind_speed;
    
    wear_coat = (temperature < temperature_for_coat || wind_speed > windspeed_for_coat);
    cout << "Do you need to wear a coat OR: " << wear_coat << endl;
    
    wear_coat = (temperature < temperature_for_coat && wind_speed > windspeed_for_coat);
    cout << "Do you need to wear a coat AND: " << wear_coat << endl;
    
    
    
    
    
    
    return 0;
}
