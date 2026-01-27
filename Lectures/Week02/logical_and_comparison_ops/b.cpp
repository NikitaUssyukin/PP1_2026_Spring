// Logical operators
// AND, OR, NOT (&&, ||, !)
// These work on boolean values
// and as a result they give us also a boolean value

#include <iostream>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    // explicit type casting
    cout << bool(a) << ' ' << bool(b) << endl;

    // implicit type casting
    cout << "a AND b: " << (a && b) << endl;
    cout << "a OR b: " << (a || b) << endl;
    cout << "NOT a: " << (!a) << endl;

    return 0;
}