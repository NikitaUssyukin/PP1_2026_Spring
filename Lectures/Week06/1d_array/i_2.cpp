/*
Sorting an array of size n using the sort() from <algorithm>
*/

#include <iostream>
#include <algorithm> // contains reverse() (also sort())

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // sorts the array elements in-place
    sort(a, a + n); // sorts the whole array

    // 1 2 3 4 5  
    // ^         ^
    // a         a + n
    
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}