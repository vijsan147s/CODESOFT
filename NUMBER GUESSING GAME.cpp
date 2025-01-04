#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int lower = 1, upper = 100, guess, attempts = 0;
    srand(time(0));
    int guessthenumber = rand() % (upper - lower + 1) + lower;
  // CREATED BY VIJAY 
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Selecte the number between " << lower << " and " << upper << ". Guess The Number!" << endl;

    do {
        cout << "Enter your guess number: ";
        cin >> guess;
        attempts++;

        if (guess < guessthenumber) {
            cout << "Low number! Try again." << endl;
        }
        else if (guess > guessthenumber) {
            cout << " High number! Try again." << endl;
        }
        else {
            cout << "Congratulations! You've guessed the correct number " << guessthenumber << " in " << attempts << " attempts." << endl;
        }
    } while (guess != guessthenumber);

    return 0;
}
