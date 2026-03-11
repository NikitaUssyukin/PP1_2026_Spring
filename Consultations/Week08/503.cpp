#include <iostream>
#include <algorithm>

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

    sort(*a, *a + n * n);

    int mx = a[n-1][n-1];

    for(int i = n - 1; i >= 0; --i) {
        for(int j = n - 1; j >= 0; --j) {
            if(a[i][j] < mx) {
                cout << a[i][j] << endl;
                return 0;
            }
        }
    }

    cout << 0 << endl;

    return 0;
}