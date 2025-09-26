#include <iostream>
using namespace std;

int main() {
    int today, elapsed;
    cout << "Enter today's day : ";
    cin >> today;

    cout << "Enter the number of days elapsed since today: ";
    cin >> elapsed;

    int future = (today + elapsed) % 7;

    cout << "Today is ";
    switch (today) {
        case 0: cout << "Sunday"; break;
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
    }

    cout << "\nThe future day is ";
    switch (future) {
        case 0: cout << "Sunday"; break;
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
    }

    cout << endl;
    return 0;
}
