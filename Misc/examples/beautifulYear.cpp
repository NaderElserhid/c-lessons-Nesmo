#include <iostream>
using namespace std;

int main() {
    int year;
    // Input the starting year
    cin >> year;

    // 1. Move to the next year immediately to start searching
    year += 1;

    // 2. Loop indefinitely until we find a year with unique digits
    while (true) {
        // Extract each digit using division and modulo operations
        int a = year / 1000;          // Thousands digit
        int b = (year / 100) % 10;    // Hundreds digit
        int c = (year / 10) % 10;     // Tens digit
        int d = year % 10;            // Units (Ones) digit

        // 3. Check if all digits are different from each other
        // This condition ensures no two digits are the same
        if (a != b && a != c && a != d && b != c && b != d && c != d) {
            break; // Found the target year, exit the loop
        }
        
        // 4. If the digits are not unique, increment to the next year and try again
        year += 1;
    }

    // Output the result
    cout << year << '\n';
    return 0;
}