#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    while(a <= 10) { // infinite loop
        if(a % 2 == 0) {
            ++a;
            continue;
        }
        cout << a << endl;
        ++a; // same as a = a + 1
    }

    return 0;
}