/*
[0][0] [0][1] [0][2] [0][3] [0][4] [0][5] [0][6] [0][7] 
[1][0] [1][1] [1][2] [1][3] [1][4] [1][5] [1][6] [1][7] 
[2][0] [2][1] [2][2] [2][3] [2][4] [2][5] [2][6] [2][7] 
[3][0] [3][1] [3][2] [3][3] [3][4] [3][5] [3][6] [3][7] 
[4][0] [4][1] [4][2] [4][3] [4][4] [4][5] [4][6] [4][7] 
[5][0] [5][1] [5][2] [5][3] [5][4] [5][5] [5][6] [5][7] 
[6][0] [6][1] [6][2] [6][3] [6][4] [6][5] [6][6] [6][7] 
[7][0] [7][1] [7][2] [7][3] [7][4] [7][5] [7][6] [7][7]

*/


#include <iostream>

using namespace std;

int main() {

    int row, col; // indexes

    cin >> row >> col;
    
    int n = 8;
    
    if(row >= n || col >= n) {
        cout << "Impossible" << endl;
        return 0; // stops the program
    }
    
    char a[n][n];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(i == row && j == col) {
                a[i][j] = '1';
            }
            else if(
                i - j == row - col || 
                i + j == row + col ||
                i == row ||
                j == col
                ) {  // checking for diagonals
                a[i][j] = '2';
            }
            else {
                a[i][j] = '*';
            }
        }
    }

    for(int i = 0; i < n; ++i) {     // outer loop
        for(int j = 0; j < n; ++j) { // inner loop
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}