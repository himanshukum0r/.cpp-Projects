#include <iostream>
using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    // Leap year is divisible by 4 but not by 100, or divisible by 400
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int month, year;
    
    // Input the year and month
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month (1-12): ";
    cin >> month;
    
    int days;

    // Determine the number of days in the given month
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            // Check for leap year in case of February
            if (isLeapYear(year))
                days = 29;
            else
                days = 28;
            break;
        default:
            cout << "Invalid month" << endl;
            return 1; // Exit the program if an invalid month is entered
    }

    // Output the result
    cout << "Total days: " << days << endl;

    return 0;
}
