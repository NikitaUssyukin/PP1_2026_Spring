/*
Example of a 2D with logical size
*/

#include <iostream>

using namespace std;

int main() {

    int ROWS = 500;
    int COLS = 500;
    
    int a[ROWS][COLS] = {}; // = {} fills the array with 0s
    // in cases when we know the size before compiling the program

    int n;
    int m;

    cin >> n >> m;


    // input
    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < m; ++j) { // inner loop
            cin >> a[i][j];
        }
    }

    // output
    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < m; ++j) { // inner loop
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}