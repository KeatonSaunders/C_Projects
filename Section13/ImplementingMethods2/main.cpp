#include <iostream>
#include "Account.h"   // source file specific to project as opposed to <systemsourcefile>

using namespace std;

int main() {
    
    Account Keaton_account;
    Keaton_account.set_name("Keaton's account"); // have to go through public method
    Keaton_account.set_balance(1000.0);
    
    if (Keaton_account.deposit(200.0))  // function returns true if deposited successfully 
        cout << "Deposit OK" << endl;
        else 
        cout << "Deposit not allowed" << endl;
        
    if (Keaton_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
        else
        cout << "Not sufficient funds" << endl;
        
    if (Keaton_account.withdraw(1500.0))
        cout << "Withdraw OK" << endl;
        else 
        cout << "Not sufficient funds" << endl;
        
    cout << endl;
    return 0;
}