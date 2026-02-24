/*
Array of char (C-style string) and std::string
*/

#include <iostream>

using namespace std;

int main() {
    
    char greeting[] = "hello"; // C-style string

    string greeting_str = "hello"; // std::string

    int n = sizeof(greeting) / sizeof(greeting[0]);

    for(int i = 0; i < n; ++i) {
        cout << greeting[i];
    }
    cout << endl;

    for(int i = 0; i < greeting_str.length(); ++i) {
        cout << greeting_str[i];
    }
    cout << endl;

    return 0;
}