#include <iostream>
using namespace std;

int main() {
    char input;
    cout << "Enter traffic light signal  ";
    cin >> input;
    if (input == 'g') {
        cout << "Go!";
    } else if (input == 'y') {
        cout << "Get ready!";
    } else if (input == 'r') {
        cout << "Stop";
    }


    return 0;
}
