/*
string output
*/

#include <iostream>

using namespace std;

int main() {

    string s = "sweet";

    cout << s << endl;

    for(int i = 0; i < s.size(); ++i) {
        cout << s[i];
    }
    cout << endl;

    // When compliling, make sure to use the -std==c++11 flag with range-based for
    // Example: g++ c.cpp -std=c++11
    for(char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}