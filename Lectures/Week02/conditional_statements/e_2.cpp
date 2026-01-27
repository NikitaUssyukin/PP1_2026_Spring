#include <iostream>

using namespace std;

int main() {

    int a;

    cin >> a;

    /*
    a is within [0; 999]
    10 - 2 digits
    100 - 3 digits
    etc...
    */

    if(a < 10) {
        cout << "a has 1 digit\n";
        return 0; // stops the program
    }
    if(a < 100) {
        cout << "a has 2 digits\n";
        return 0; // stops the program
    }
    if(a < 1000) {
        cout << "a has 3 digits\n";
        return 0; // stops the program
    }


    return 0;
}