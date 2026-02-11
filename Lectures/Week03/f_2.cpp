/*
left shift: a << b
shift the bits of a by b positions to the left, filling the right part with 0s
same as multiplication by 2^b

right shift: a >> b
shift the bits of a by b positions to the right, filling the left part with 0s
same as division by 2^b
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int smallest_neg = pow(2, 31) * -1;

    // 1000 0000 0000 0000 0000 0000 0000 0000
    cout << smallest_neg << endl;

    // 0000 0000 0000 0000 0000 0000 0000 0000
    cout << (smallest_neg << 1) << endl;
    
    // 1100 0000 0000 0000 0000 0000 0000 0000
    cout << (smallest_neg >> 1) << endl;

    return 0;
}