#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector <char> vowels {'a','e','i','o','u'};
    cout << vowels[0] << endl;
    
    //vector <int> test_scores (3);
    //vector <int> test_scores (3,100); // init all to 100
    
    vector <int> test_scores {100,98,89};
    
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;
    
    cout << "Using vector syntax: " << endl;
    
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    
    cout << "There are " << test_scores.size() << " elements in the vector." << endl;
    
    cout << "Enter 3 test scores: " << endl;
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);
    
    cout << "\nUpdated test scores: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    
    int score_to_add {0};
    cout << " Enter a score to add: " << endl;
    cin >> score_to_add;
    test_scores.push_back(score_to_add);
    
    cout << " Enter one more score to add: " << endl;
    cin >> score_to_add;
    test_scores.push_back(score_to_add);
    
    cout << "\nTest scores are now: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    
    cout << "The size of the vector is now " << test_scores.size() << endl;
    
    vector <vector<int>> movie_ratings
    {
        {0,4,3,5},
        {2,3,3,5},
        {1,4,4,5}
    };
    
    cout << "Here are the review for reviewer 1 using array syntax: " << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;
    
    cout << "Here are the review for reviewer 1 using vector syntax: " << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;
    
    return 0;
}
