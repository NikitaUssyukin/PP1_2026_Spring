#include <iostream>

using namespace std;

int main() {

    string s; // empty string
    
    for(int i = 0; i < 5; ++i) {
        // take 5 chars from terminal
        // and append them to the string
        char c;
        cin >> c;
        s += c; // same as s = s + c;
        cout << s << endl;
    }

    return 0;
}