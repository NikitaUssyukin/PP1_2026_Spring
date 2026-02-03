#include <iostream>

using namespace std;

int main() {

    string s = "1234";

    // character itself (char type)
    cout << "character: " << s[0] << "; ";
    cout << "ASCII code: " << int(s[0]) << endl;

    cout << "character: " << s[1] << "; ";
    cout << "ASCII code: " << int(s[1]) << endl;

    cout << "character: " << s[2] << "; ";
    cout << "ASCII code: " << int(s[2]) << endl;

    cout << "character: " << s[3] << "; ";
    cout << "ASCII code: " << int(s[3]) << endl;

    return 0;
}