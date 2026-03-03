/*
Outputting elements of an array with a for loop
*/

#include <iostream>

using namespace std;

int main() {

    int a[6] = {1, 2, 3, 4, 5, 6};

    for(int i = 0; i < 6; ++i) { // i goes within the range [0; 6) 
        cout << a[i] << " ";
    }

    return 0;
}