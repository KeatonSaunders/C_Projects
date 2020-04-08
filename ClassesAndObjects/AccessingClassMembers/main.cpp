#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    // attributes
    string name;
    int health;
    int xp;
    
    //methods
    void talk (string text_to_say) {cout << name << " says " << text_to_say << endl; } // implementation, attributes of the class are available to the method
    bool is_dead ();
};

class Account {
public:
    // attributes 
    string name;
    double balance;
    
    // methods
    bool deposit (double bal) {balance += bal; cout << "In deposit" << endl;}   // implementation
    bool withdraw (double bal) {balance -= bal; cout << "Withdrawn" << endl;}
};

int main() {
    
    Account Keaton_account;
    Keaton_account.name = "Keaton's account";
    Keaton_account.balance = 5000.0;
    Keaton_account.deposit(1000.0);
    Keaton_account.withdraw(500.0);
    
    Player Keaton;
    
    Keaton.name = "Keaton";
    Keaton.health = 100;
    Keaton.xp = 12;
    Keaton.talk("hi there");
    
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy -> xp = 15; // same as dereferencing
    enemy -> talk("I will destroy you");
    
    cout << endl;
    return 0;
}
