#include <iostream>
using namespace std;

int main() {
    int num;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Check if the least significant bit is 0 (even) or 1 (odd)
    if (num & 1) {
        cout << num << " is an odd number." << endl;
    } else {
        cout << num << " is an even number." << endl;
    }

    return 0;
}
