#include <iostream>
using namespace std;
int main () {
    float weight;
    cout << "Enter the weight of package";
    cin >> weight;
    if (weight <=0) {
        cout << "invalid input";
    }else if ( weight <=1) {
        cout << "price is 3500 sum";
    }else if ( weight <=3) {
        cout << "price is 5500 sum";
    }else if ( weight <=10) {
        cout << "price is 8500 sum";

    }else if ( weight <=20) {
        cout << "price is 10500 sum";
    }else {
        cout<< "package is not shipped";
    }
return 0;
}