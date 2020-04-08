#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    // attributes
    string name {"Player"};
    int health {100};
    int xp {3};
    
    //methods
    void talk (string);    // function prototypes, no implementation yet
    bool is_dead ();
};

class Account {
    // attributes 
    string name {"Account"};
    double balance {0.0};
    
    // methods
    bool deposit (double);
    bool withdraw (double);
};

int main()
{
	Account Keaton_account;
    Account Frank_Account;
    
    Player Keaton;
    Player Hero;
    
    Player players[] {Keaton, Hero};
    
    vector<Player> player_vec {Keaton};
    player_vec.push_back(Hero);
    
    Player *enemy {nullptr};
    enemy = new Player;
    
    delete enemy;
    cout << "Complete";
    cout << endl;
	return 0;
}