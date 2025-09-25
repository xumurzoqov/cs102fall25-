#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b!=0) {
        if (a%b == 0 && b!=0)
            cout << a <<  "is divisible by " << b << endl;
        else
            cout << a <<  " is not dividdible by " << b << endl;
    }
    else
        cout << "division by 0 is not allowed " << endl;
    return 0;


    }


