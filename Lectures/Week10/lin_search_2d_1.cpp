/*
Example of linear search in 2D
*/

#include <iostream>

using namespace std;

string linSearch(int a[][1000], int n, int m, int target) {
    string res = "";
    for(int i = 0; i < n; ++i) {     
        for(int j = 0; j < m; ++j) {
            if (a[i][j] == target) {
                res += "target found!\n";
                res += "position: ";
                res += to_string(i + 1) + ", " + to_string(j + 1) + "\n";
                return res;
            }
        }
    }
    return "target not found!\n";
}

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