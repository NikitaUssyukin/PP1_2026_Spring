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

    
    // standard for loop with iterators
    // because of the use of the auto keyword, we need to use the -std=c++11 flag
    // example: g++ d_2_2.cpp -std=c++11
    for(auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " "; // * dereferences the iterator - gets the value 
                            // stored at the address specified by the iterator
    }
    cout << endl;
    

    return 0;
}
