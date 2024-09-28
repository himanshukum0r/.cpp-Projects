#include <iostream>
#include <cctype> // For toupper and tolower functions
using namespace std;

int main() {
    char ch;
    
    // Input a character from the user
    cout << "Enter a character: ";
    cin >> ch;

    // Check if the character is lowercase or uppercase and convert
    if (islower(ch)) {
        // Convert to uppercase
        char upperChar = toupper(ch);
        cout << "Lowercase to Uppercase: " << upperChar << endl;
    } else if (isupper(ch)) {
        // Convert to lowercase
        char lowerChar = tolower(ch);
        cout << "Uppercase to Lowercase: " << lowerChar << endl;
    } else {
        cout << "Please enter a valid alphabetic character." << endl;
    }

    return 0;
}
