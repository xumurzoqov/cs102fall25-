#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand();

    string guess;
    cout << "Guess if the number is even or odd: ";
    cin >> guess;

    bool isEven = (number % 2 == 0);

    if ((isEven && guess == "even") || (!isEven && guess == "odd")) {
        cout << "Correct! The number was " << number << ".";
    } else {
        cout << "Incorrect. The number was " << number << ".";
    }

    return 0;
}
