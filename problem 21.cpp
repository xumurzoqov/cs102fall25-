#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number : ";
    cin >> month;

    switch (month) {
        case 1:
            cout << "In January: New Year's Day, 1 January";
            break;
        case 3:
            cout << "In March  International Womens' Day 8 March, Navruz 21 March";
            break;
        case 5:
            cout << "In May : Day of Remembrance and Honor, 9 May";
            break;
        case 9:
            cout << "In September : Independence Day, 1 September";
            break;
        case 10:
            cout << "In October : Teachers' Day, 1 October";
            break;
        case 12:
            cout << "In December there is: Constitution Day, 8 December";
            break;
        case 11:
            cout << "In November there is: Davlat bayrog'i kuni, 18 November";
            break;
        case 2:
        case 4:
        case 6:
        case 7:
        case 8:
            cout << "In February, April, June, July, and August there are no fixed holidays.\nThere are Ramadan Hayit and Qurbon Hayit, but their dates change.";
            break;
        default:
            cout << "Invalid month number.";
    }

    return 0;
}
