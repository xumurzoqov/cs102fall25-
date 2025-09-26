#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number ";
    cin >> num;

    int sign;
    if (num > 0)
        sign = 1;
    else if (num < 0)
        sign = -1;
    else
        sign = 0;

    switch (sign) {
        case 1: cout << "Positive"; break;
        case -1: cout << "Negative"; break;
        case 0: cout << "It is zero"; break;
    }

    return 0;
}
