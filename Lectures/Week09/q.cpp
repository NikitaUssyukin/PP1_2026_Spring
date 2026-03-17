/*
append, insert, erase
*/

#include <iostream>

using namespace std;

int main() {

    string s = "cat";

    s.append("erpillar");      // "caterpillar"
    cout << s << endl;

    s.insert(5, "X");          // "caterXpillar"
    cout << s << endl;

    s.erase(5, 1);             // remove 1 symbol at index 5 -> "caterpillar"
    cout << s << endl;

    return 0;
}
