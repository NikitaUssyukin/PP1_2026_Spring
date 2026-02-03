#include <iostream>

using namespace std;

int main() {

    string s = "0123456789";

    // character itself (char type)
    for(int i = 0; i < s.length(); ++i) {
        cout << "character: " << s[i] << "; ";
        cout << "ASCII code: " << int(s[i]) << endl;
    }

    return 0;
}