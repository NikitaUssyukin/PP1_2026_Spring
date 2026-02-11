/*
bitwise operators
*/

#include <iostream>

using namespace std;

int main() {

    int a = 11; // in bin: 01011
    int b = 21; // in bin: 10101

    cout << (a & b) << endl;
    /*
    01011
    &    = 00001 (1 in dec)
    10101
    */
    cout << (a | b) << endl;
    /*
    01011
    |    = 11111 (31 in dec)
    10101
    */
    cout << (a ^ b) << endl;
    /*
    01011
    ^    = 11110 (30 in dec)
    10101
    */

    return 0;
}