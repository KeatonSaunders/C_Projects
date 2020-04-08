#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    // attributes
    string name;
    int health;
    int xp;
    
public:
    // methods
    void talk (string text_to_say) {cout << name << " says " << text_to_say << endl; }
    bool is_dead ();
};

int main() {
    
    Player Keaton;
    //Keaton.name = "Keaton"; // error - name is a private member of Player
    Keaton.talk("Hello there");
    
    cout << endl;
    return 0;
}