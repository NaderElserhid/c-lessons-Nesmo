#include <iostream>
#include <string>

using namespace std;

int main() {
    string A, B;
    long long X, Y;

    // Input
    cout << "Enter A and B: ";
    cin >> A >> B;

    cout << "Enter X and Y: ";
    cin >> X >> Y;

    int n = A.length();
    long long diffs_direct = 0;   // Number of different characters (normal)
    long long diffs_reverse = 0;  // Number of different characters (if A reversed)

    for (int i = 0; i < n; i++) {
        // 1. Count differences in normal order
        if (A[i] != B[i]) {
            diffs_direct++;
        }

        // 2. Count differences if A is reversed
        // Compare last char of A with first of B, etc.
        if (A[n - 1 - i] != B[i]) {
            diffs_reverse++;
        }
    }

    // Calculate cost without reversing
    long long cost1 = diffs_direct * X;

    // Calculate cost with reversing + change costs
    long long cost2 = Y + (diffs_reverse * X);

    // Output the minimum cost
    if (cost1 < cost2) {
        cout << "Minimum cost = " << cost1 << endl;
    } else {
        cout << "Minimum cost = " << cost2 << endl;
    }

    return 0;
}
