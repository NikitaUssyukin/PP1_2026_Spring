#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i) {
        if(i + 1 == n || a[i] != a[i + 1]) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    /*
    5
    1 2 3 4 5  
    ^ ^
    i i+1
    0 1 2 3 4
    */

    return 0;
}