#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    while(true) { // infinite loop
        if(a > 10) break; // infinite loop will be stopped here
        cout << a << endl;
        ++a; // same as a = a + 1
    }

    return 0;
}