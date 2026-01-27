// Loops allow us to alter the control flow of the program
// By specifying the amount of repetitions for the code
// Loops - for, while, do while

#include <iostream>

using namespace std;

int main() {

    for(int i = 1; i <= 5; ++i) { // ++i same as i = i + 1 or i += 1
        cout << i << endl;
    }

    return 0;
}