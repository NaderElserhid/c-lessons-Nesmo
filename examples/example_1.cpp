#include <iostream>
using namespace std;

// Function to find the larger of two numbers
int max_function(int x, int y) {
    if (x > y) return x;
    else return y;
}

int main() {
    int n;

    // Asking for the number of citizens
    cout << "Please enter the number of citizens: ";
    cin >> n;

    int a[n];
    cout << "Enter the wealth of each citizen: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Finding the maximum wealth in the array
    int max_value = a[0];
    for (int i = 0; i < n; i++) {
        max_value = max_function(max_value, a[i]);
    }

    // Calculating total coins needed for equality
    int coins = 0;
    for (int i = 0; i < n; i++) {
        coins += (max_value - a[i]);
    }

    // Output the final result
    cout << "Total coins the King will pay: " << coins << endl;

    return 0;
}
