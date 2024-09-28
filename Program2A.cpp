// Program to check prime numbers between the two integers. 

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;  // 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= n; i++) {  // Loop from 2 to sqrt(n)
        if (n % i == 0) {
            return false;  // n is divisible by i, so it's not prime
        }
    }
    return true;  // n is prime if no divisors were found
}

int main() {
    int First, Second;
    
    cout << "Enter two First and Second Integer: ";
    cin >> First >> Second;

    cout << "Prime numbers between " << First << " and " << Second << " are: " << endl;
    
    for (int num = First; num <= Second; num++) {
        if (isPrime(num)) {
            cout << num << " ";  // Print the prime number
        }
    }
    
    return 0;
}
