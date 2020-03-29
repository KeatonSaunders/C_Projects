#include <iostream>

using namespace std;

int main() {
    
    cout << "Hello welcome to Keaton's room cleaning service." << endl;
    cout << "How many rooms would you like cleaned?" << endl;
    
    const double price_per_room {30};
    const double sales_tax {0.06};
    const int estimate_expiry {30};
    int number_of_rooms {0};
    cin >> number_of_rooms;
    
    cout << "Estimate of room cleaning service:" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: R" << price_per_room << endl;
    cout << "Cost: R" << price_per_room * number_of_rooms << endl;
    cout << "Tax: R" << price_per_room * number_of_rooms * sales_tax << endl;
    cout << ".........................................." << endl;
    cout << "Total: R" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days." << endl;
    
    return 0;
}
