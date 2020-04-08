#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
public:
    string get_name() {return name;}
    int get_health() {return health;}
    int get_xp() {return xp;}
    Player(string name_val = "None", int health_val = 0, int xp_val = 0);
    // Copy constructor
    Player(const Player &source);  // needs to be implemented
    // Destructor
    ~Player() {cout << "Destructor called for: " << name << endl;}
};

Player::Player(string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
        cout << "Three arg constructor" << endl;
}

Player::Player (const Player &source) 
//    : name(source.name), health(source.health), xp(source.xp) 
    : Player (source.name, source.health, source.xp) {
        cout << "Copy constructor made copy of " << source.name << endl;
    }

void display_player(Player p) {
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;
}

int main() {
    
    Player empty {"XXXXX", 100, 50};
    
    Player my_new_object {empty};
    
    display_player(empty);
    
    Player Keaton {"Keaton"};
    Player Hero {"Hero",100};
    Player Villian {"Villian", 100, 55};
    
    cout << endl;
    return 0;
}