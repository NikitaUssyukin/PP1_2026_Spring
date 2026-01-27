#include <iostream>

using namespace std;

int main() {

    int a;

    cin >> a;

    if(a < 7) {
        cout << "a is less than 7\n";
    }
    else if(a > 7) {
        cout << "a is greater than 7\n";
    }
    else {
        cout << "a is equal to 7\n";
    }


    return 0;
}