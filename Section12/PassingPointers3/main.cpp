#include <iostream>
#include  <string>
#include  <vector>

using namespace std;

void display (const vector<string> *const v) {
    //(*v).at(0) = "Funny";   this will cause copiler error because of const vector
    for (auto str: *v)
        cout << str << " ";
    cout << endl;
    // c = nullptr;      this will cause compiler error because of const pointer (*const v)
}

void display(int *array, int sentinel) {      // function overloading
    while (*array != sentinel)
        cout << *array++ << " ";     // couldn't have a constant pointer here
    cout << endl;
}

int main() {
    
//    cout << "..................................................." << endl;
//    vector <string> stooges {"Larry","Molly","Curly"};
//    display(&stooges);

    cout << "..................................................." << endl;
    int scores [] {100,98,97,79,85,-1};
    display(scores, -1);
    
    
    cout << endl;
    return 0;
}
