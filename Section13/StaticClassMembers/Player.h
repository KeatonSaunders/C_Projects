#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player {
private:
    static int num_players;
    std::string name;
    int health;
    int xp;
public:
    std::string get_name() const {return name;} // anything you have that doesn't modify the object should be const
    int get_health() const {return health;}
    int get_xp () const {return xp;}
    void set_name(std::string name_val) {name = name_val;}
    // constructor
    Player(std::string name_val="None", int health_val = 0, int xp_val = 0);
    // copy constructor
    Player(const Player &source);
    // destructor
    ~Player();
    
    static int get_num_players();  // only has access to static variables
};


#endif // _PLAYER_H_
