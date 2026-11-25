#include <iostream>
#include <string>
using namespace std;

// Function to check if a number is "beautiful"
bool isBeautiful(long long n) {
    string s = to_string(n);   // Convert number to string

    // Must have at least 3 digits
    if (s.length() < 3) return false;

    // Number must not contain digit 0
    for (char c : s)
        if (c == '0') return false;

    int i = 0;

    // Strictly increasing sequence (must be at least length 2)
    while (i + 1 < s.length() && s[i] < s[i + 1])
        i++;

    // If no increase or all digits increasing only (no decrease part)
    if (i == 0 || i == s.length() - 1)
        return false;

    // Strictly decreasing sequence until the end
    while (i + 1 < s.length() && s[i] > s[i + 1])
        i++;

    // Check if we reached the end of the number
    return (i == s.length() - 1);
}

int main() {
    long long n;
    cin >> n;   // Read input number

    n++; // Start checking from the next number

    // Find the next beautiful number
    while (!isBeautiful(n))
         n++;

    cout << n;  // Output the beautiful number
    return 0;
}
