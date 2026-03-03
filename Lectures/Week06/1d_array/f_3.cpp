/*
"junk values" - uninitialized elements of the array
which store undefined values
*/

#include <iostream>

using namespace std;

int main() {

    int ARR_SIZE = 10000; // here we specify the largest size we can theoretically need
    
    int a[ARR_SIZE] = {}; // when we know the size of the array before compiling and running the program
    // "= {}" expression fills the array with 0-s (initializes all elements to 0)

    int n;    // n is the size of the array you're going to be using
    cin >> n; // n can be anything within [1; ARR_SIZE]

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}