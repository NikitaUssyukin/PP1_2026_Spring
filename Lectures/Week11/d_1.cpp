/*
STL
Vector
Outputting elements
*/

#include <iostream>
#include <vector>

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

    /*
    // standard for loop
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
    */

    // range-based for loop
    // because of the use of the range-based for loop, we need to use the -std=c++11 flag
    // example: g++ d_1.cpp -std=c++11
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
