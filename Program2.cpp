#include <iostream>
using namespace std;

bool isPrime(int n) {
    // 1. Handle cases where n is less than 2
    if (n <= 1) {
        return false;  // 0 and 1 are not prime numbers
    }

    // 2. Check divisibility from 2 to sqrt(n)
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;  // n is divisible by i, so it's not prime
        }
    }
    return true;  // n is prime if no divisors were found
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}