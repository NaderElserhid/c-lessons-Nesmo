#include <iostream>
using namespace std;

// Function to calculate the absolute value to ensure a positive result
int abs_val(int v) {
    return (v > 0 ? v : -v);

  //if (v >= 0) {
  //      return v;
  //  } else {
  //      return -v;
  //  }
}

int main() {
    int r, c;

    // 1. Search for the position of the number 1 in a 5x5 matrix
    // We use nested loops to iterate through rows (i) and columns (j)
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int x;
            cout << "Enter 0 or 1 for position (" << i  << "," << j << "): ";
            cin >> x;

            // If the current element is 1, store its row and column indices
            if (x == 1) {
                r = i; // Store row number
                c = j; // Store column number
            }
        }
    }

    // 2. Calculate the distance to the center (3, 3)
    // The result is the sum of vertical steps + horizontal steps
    // This is known as "Manhattan Distance"
    int result = abs_val(r - 3) + abs_val(c - 3);

    // 3. Print the total number of moves needed
    cout << result << endl;

    return 0;
}
