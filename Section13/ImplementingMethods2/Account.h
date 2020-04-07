#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string> // don't want to use namespaces inside header files because everything that includes them get that namespace

class Account {
private:
    // attributes
    std::string name;
    double balance;
    
public:
    // methods
    void set_balance(double bal) {balance = bal;}
    double get_balance() {return balance;}
    
    // methods will be declared outside this class declaration
    void set_name(std::string n);
    std::string get_name();
    
    bool deposit(double amount);
    bool withdraw (double amount);
};

#endif // _ACCOUNT_H_
