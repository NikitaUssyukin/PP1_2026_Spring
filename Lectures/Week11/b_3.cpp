/*
STL
Vector
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    
    // because of the use of the range-based for loop, we need to use the -std=c++11 flag
    // example: g++ b_3.cpp -std=c++11
    for(int &x : v) {
        cin >> x;
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}