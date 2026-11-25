#include <iostream>
using namespace std;

int main() {

    // Ask the user for matrix dimensions
    int n, m;
    cout << "Enter number of rows (n) and columns (m): ";
    cin >> n >> m;

    // Special case: 1x1 matrix
    if (n == 1 && m == 1) {
        cout << -1;
        return 0;
    }

    int a[n][m], b[n][m];

    // Generate numbers from 1 to n*m automatically
    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = num;
            num++;
        }
    }

    // Apply transformation (+1, last becomes 1)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == n * m)
                b[i][j] = 1;
            else
                b[i][j] = a[i][j] + 1;
        }
    }

    // Print result matrix
    cout << "Generated Result Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
