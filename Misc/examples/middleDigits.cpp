#include <iostream>
#include <string>
using namespace std;

// Function to swap the middle digits of two strings using reference
void SwapMidDigits(string &x, string &y) {

    //string x = 12345
    //Stack:  string object (pointer, size, capacity)
    //char mid = x[2]
    //Heap:   1 2 3 4 5

    // Find the middle index of each string
    int midX = x.length() / 2;
    int midY = y.length() / 2;

   //  12345 → length = 5 → mid = 5/2 = 2
   //index: 0 1 2 3 4
   //middle = 2 → 3

    // Swap the middle characters
    char temp = x[midX];
    x[midX] = y[midY];
    y[midY] = temp;
}

int main() {
    string x, y;

    // Ask the user to input the first number/string
    cout << "Enter the first number or string: ";
    cin >> x;

    // Ask the user to input the second number/string
    cout << "Enter the second number or string: ";
    cin >> y;

    // Call the function to swap middle digits
    SwapMidDigits(x, y);

    // Print the new values after swapping
    cout << "After swapping middle digits:\n";
    cout << "First string: " << x << endl;
    cout << "Second string: " << y << endl;

    return 0;
}
