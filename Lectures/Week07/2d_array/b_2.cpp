/*
Example of using a non-nested for loop
Here we have a nested for loop to take input
*/

#include <iostream>

using namespace std;

int main() {

    int n;
    int m;

    cin >> n >> m;

    int a[n][m];

    // input
    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < m; ++j) { // inner loop
            cin >> a[i][j];
        }
    }

    /*
    n = 2
    m = 4

    n * m = 8

    n * m -> n ?
    n * m / m = n
    */
    for(int i = 0; i < n * m; ++i) {
        int r = i / m; // row index
        int c = i % m; // column index
        cout << a[r][c] << " "; 
        if(c == m - 1) cout << endl;
    }

    return 0;
}