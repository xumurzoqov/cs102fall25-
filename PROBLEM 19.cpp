#include <iostream>
using namespace std;
int main () {
    float weight;
    int category;
    cout << "enter weight of package";
    cin >> weight;
    if (weight <=0) category = 0;
    else if (weight <=1) category = 1;
    else if (weight <= 3) category = 2;
    else if ( weight <=10) category = 3;
    else if ( weight <=20 ) category = 4;
    else category = 5;
    switch (category) {
        case 0: cout << "invalid input"; break;
        case 1: cout <<" price is 3500 sum"; break;
        case 2: cout <<"price is 5500 sum"; break;
        case 3: cout <<"pirce is 8500 sum "; break;
        case 4: cout << "price is 10500 sum "; break;
        case 5: cout <<"package cant be shipped"; break;

    }
return 0;
}