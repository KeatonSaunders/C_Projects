#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
public:
    // Overloaded constructors
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
};

Player::Player() 
    : Player {"None",0,0} { // calling the three arg constructor
    cout << "No args constructor" << endl;
}

Player::Player(string name_val) 
    : Player {name_val, 0, 0} {
        cout << "One arg constructor" << endl;
}

Player::Player(string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
        cout << "Three arg constructor" << endl;
}

int main() {
    
    Player empty;
    Player Keaton {"Keaton"};
    Player Villian {"Villian", 100, 55};
    
    cout << endl;
    return 0;
}