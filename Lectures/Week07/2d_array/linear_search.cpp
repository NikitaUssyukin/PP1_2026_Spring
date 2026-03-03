/*
Example of linear search in 2D
*/

#include <iostream>

using namespace std;

int main() {

    int n;
    int m;
    
    cin >> n >> m;
    
    int a[n][m];

    // input
    for(int i = 0; i < n; ++i) {    
        for(int j = 0; j < m; ++j) { 
            cin >> a[i][j];
        }
    }

    int target;
    cin >> target;

    // linear search
    for(int i = 0; i < n; ++i) {     
        for(int j = 0; j < m; ++j) {
            if (a[i][j] == target) {
                cout << "target found!\n";
                cout << "position: " << i + 1 << ", " << j + 1 << endl;
                return 0;
            }
        }
    }
    cout << "target not found!\n";

    return 0;
}