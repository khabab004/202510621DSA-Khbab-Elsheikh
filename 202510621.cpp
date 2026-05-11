#include <iostream>
#include <vector>

using namespace std;

int main() {
    int chosenNumber = 7;
    int userGuess = 0;
    vector<int> allGuesses;

    while (userGuess != chosenNumber) {
        cout << "Enter a number: ";
        cin >> userGuess;
        
        allGuesses.push_back(userGuess);

        if (userGuess > chosenNumber) {
            cout << "Too high" << endl;
        } 
        else if (userGuess < chosenNumber) {
            cout << "Too low" << endl;
        } 
        else {
            cout << "Correct" << endl;
        }
    }

    cout << "Your guesses:" << endl;
    for (int i = 0; i < allGuesses.size(); i++) {
        cout << allGuesses[i] << " ";
    }

    return 0;
}
