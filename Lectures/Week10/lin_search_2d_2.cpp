/*
Example of linear search in 2D
*/

#include <iostream>
#include "utilities.h"

using namespace std;

int main() {

    int n;
    int m;
    
    cin >> n >> m;
    
    int a[n][1000];

    // input
    for(int i = 0; i < n; ++i) {    
        for(int j = 0; j < m; ++j) { 
            cin >> a[i][j];
        }
    }

    int target;
    cin >> target;

    cout << linSearch(a, n, m, target) << endl;

    return 0;
}