/*
STL
Vector
Sorting elements
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> v; // empty vector

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }   

    sort(v.begin(), v.end());

    // range-based for loop
    // because of the use of the range-based for loop, we need to use the -std=c++11 flag
    // example: g++ e_1.cpp -std=c++11
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
