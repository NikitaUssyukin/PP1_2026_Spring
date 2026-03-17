/*
substr(start_index, length)
*/

#include <iostream>

using namespace std;

int main() {

    string s = "Programming";

    cout << s.substr(0, 3) << endl; // "Pro"
    cout << s.substr(3, 4) << endl; // "gram"
    cout << s.substr(7) << endl;    // from index 7 to the end: "ming"

    return 0;
}
