#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    do {
        cout << a << endl;
        ++a; // same as a = a + 1
    } while(a <= 10);

    return 0;
}