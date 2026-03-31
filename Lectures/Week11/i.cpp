/*
STL
Map
Counting occurences of strings
*/

#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> m;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        ++m[word];
    }

    // when compliling, make sure to use the -std=c++11 flag
    // example: g++ i.cpp -std=c++11
    for(pair<string, int> p : m) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}