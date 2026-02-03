#include <iostream>

using namespace std;

int main() {

    string s; // empty string
    
    for(int i = 0; i < 5; ++i) {
        // take 5 ascii codes from terminal
        // and prepend them to the string
        int ascii;
        cin >> ascii;
        s = char(ascii) + s;
        cout << s << endl;
    }

    return 0;
}