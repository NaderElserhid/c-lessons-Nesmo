#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number of rows (m) and columns (n): ";
    int m, n;
    cin >> m >> n;

    // Each domino covers 2 cells
    int result = (m * n) / 2;

    // Display the result to the user
    cout << "Maximum number of dominoes that can be placed: " << result << endl;

    return 0;
}
