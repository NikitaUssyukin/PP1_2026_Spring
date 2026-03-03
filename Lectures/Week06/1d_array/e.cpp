/*
Increment and decrement (post- and pre- variations)
*/

#include <iostream>

using namespace std;

int main() {

    int a = 2;
    int b = 3;
    
    cout << ++a - b-- << endl; // 3 - 3 = 0
    cout << "a : " << a << ", b: " << b << endl;
    cout << a + b << endl;     // 3 + 2 = 5

    return 0;
}