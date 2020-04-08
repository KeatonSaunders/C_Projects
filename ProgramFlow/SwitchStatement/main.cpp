#include <iostream>

using namespace std;

int main() {
    
    char letter_grade {};
    
    cout << "Enter the letter grade you expect on the exam: " << endl;
    cin >> letter_grade;
    
    switch (letter_grade) {
        case 'a':
        case 'A':
            cout << "You need a 90 or above, study hard!" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You need 80 to 89, go study." << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need 70 to 79 for an average grade." << endl;
            break;
        case 'd':
        case 'D':
            cout << "All you need is 60 to 69." << endl;
            break; // don't want to fall through
        case 'f':
        case 'F':
        {
            char confirm {}; // this is why we need curly braces
            cout << "Are you sure (y/n)?";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y')
                cout << "OK, guess you don't want to study." << endl;
            else if (confirm == 'n' || confirm == 'N')
                cout << "Good, go study." << endl;
            else
                cout << "llegal choice." << endl;
            break;
        }

        default:
            cout << "Sorry, that's not a valid grade." << endl;
    }
    
    
    
    
    
    
    return 0;
}
