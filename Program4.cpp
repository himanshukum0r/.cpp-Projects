#include <iostream>
using namespace std;

bool isEven(int n) {
    // Base case: If n is 0, it's even
    if (n == 0) {
        return true;
    }
    // Base case: If n is 1, it's odd
    else if (n == 1) {
        return false;
    }
    // Recursive call: Reduce n by 2
    else {
        return isEven(n - 2);
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Call the recursive function to check even or odd
    if (isEven(num)) {
        cout << num << " is an even number." << endl;
    } else {
        cout << num << " is an odd number." << endl;
    }

    return 0;
}
