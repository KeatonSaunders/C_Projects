#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
public:
    string get_name() const {return name;} // anything you have that doesn't modify the object should be const
    void set_name(string name_val) {name = name_val;}
    
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

void display_player_name(const Player &p) {
    cout << p.get_name() << endl;
}

int main() {
 
    const Player Villian {"Villian",100,55}; // can't change villian's attributes
    Player Hero {"Hero",100,15};
    
    cout << Villian.get_name() << endl;
    cout << Hero.get_name() << endl;
    
    display_player_name(Villian);
    display_player_name(Hero);
    
    cout << endl;
    return 0;
}