#include <iostream>
using namespace std;

int main() {
    char lang;
    cout << "Enter language code (u/e/r/g): ";
    cin >> lang;

    switch (lang) {
        case 'u': cout << "Salom"; break;
        case 'e': cout << "Hello"; break;
        case 'r': cout << "Privet"; break;
        case 'g': cout << "Hallo"; break;
        default: cout << "I do not know this language";
    }

    return 0;
}
//
// Created by User on 9/26/2025.
//