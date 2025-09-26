#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int number = rand() % 90 + 10;
    int guess;

    cout << "Predict the two-digit number: ";
    cin >> guess;
    int numTens = number / 10;
    int numUnits = number % 10;

    int guessTens = guess / 10;
    int guessUnits = guess % 10;
    if (guess == number) {
        cout << "Exact match! Accuracy: 100%" << endl;
    } else if (guessTens == numTens || guessTens == numUnits ||
               guessUnits == numTens || guessUnits == numUnits) {
        cout << "One digit matched. Accuracy: 50%" << endl;
               } else {
                   cout << "No match. Accuracy: 0%" << endl;
               }

    cout << "Generated number was: " << number << endl;

    return 0;
}
