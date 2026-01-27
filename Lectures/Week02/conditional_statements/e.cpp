#include <iostream>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    if(a < b) {
        cout << a << " is less than " << b << "\n";
    }
    else if(a > b) {
        cout << a << " is greater than " << b << "\n";
    }
    else {
        cout << a << " is equal to " << b << "\n";
    }


    return 0;
}