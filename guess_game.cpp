#include <iostream>    
#include <cstdlib>      
#include <ctime>        
using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

    
    int secretNumber = rand() % 100 + 1;
    int userGuess;
    int attempts = 0;

    cout << "🎯 Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl << endl;

    // Game loop
    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > secretNumber) {
            cout << "Too high! Try again. 🔽" << endl;
        } else if (userGuess < secretNumber) {
            cout << "Too low! Try again. 🔼" << endl;
        } else {
            cout << "🎉 Congratulations! You guessed it right in " << attempts << " attempts." << endl;
        }

    } while (userGuess != secretNumber);

    return 0;
}
