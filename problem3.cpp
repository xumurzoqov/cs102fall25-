#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three integers separated by spaces: ";
    cin >> a >> b >> c;

    int max = 0;

    if (a>b && a>c ) {
        cout << a << endl;
    }
    else if (b>a && b>c ) {
        cout << b << endl;
    }   else {
        cout << c << endl;
    }



    return 0;
}
