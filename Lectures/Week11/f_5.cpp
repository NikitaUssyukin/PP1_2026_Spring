/*
STL
Set
Basic example
*/

#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {

    set<int> s; // empty set

    cout << "size before input: " << s.size() << endl;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        s.insert(x);
    }

    cout << "size after input: " <<  s.size() << endl;

    vector<int> v(s.begin(), s.end());

    int idx;
    cin >> idx;

    cout << v.at(idx) << endl;

    return 0;
}
