/*
comparing strings for equality
*/

#include <iostream>

using namespace std;

int main() {

    string s1 = "hello";
    string s2 = "hello";
    string s3 = "world";

    cout << (s1 == s2) << endl; // 1 (true)
    cout << (s1 == s3) << endl; // 0 (false)
    cout << (s1 != s3) << endl; // 1 (true)

    return 0;
}
