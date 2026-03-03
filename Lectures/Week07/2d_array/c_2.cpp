/*
Example of using a nested for loop with a square (n by n) 2D array
Nested loop is essentially a loop inside another loop
*/

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int a[n][n];

    // input
    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < n; ++j) { // inner loop
            cin >> a[i][j];
        }
    }

    // output
    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < n; ++j) { // inner loop
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}