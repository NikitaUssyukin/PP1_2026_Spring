#include <iostream>

using namespace std;

int main() {

    string s; // empty string
    
    for(int i = 0; i < 5; ++i) {
        // take 5 chars from terminal
        // and prepend them to the string
        char c;
        cin >> c;
        s = c + s;
        cout << s << endl;
    }

    return 0;
}