/*
Checking if a square n by n 2D array is symmetric
over the main diagonal
*/

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    char a[n][n];

    // input
    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < n; ++j) { // inner loop
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(i < j) {
                if(a[i][j] == a[j][i]) continue;
                else {
                    cout << "Not symmetric\n";
                    return 0; // stops the program
                }
            }        
        }
    }

    cout << "Symmetric\n";

    return 0;
}