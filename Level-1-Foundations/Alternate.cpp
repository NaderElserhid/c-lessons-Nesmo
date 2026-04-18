#include <iostream>
using namespace std;

int main() {
    // Read input number n (can be large, so use long long)
    long long n;
    cin >> n;

    // Variable to store the final result
    long long total_sum = 0;

    // Loop from 1 to n
    for (int i = 1; i <= n; i++) {

        // Calculate the term i * (n - i + 1)
        // This pattern is symmetric and often used in summation problems
        long long term = (long long)i * (n - i + 1);
        
        // Pattern: add, add, subtract (every third term is subtracted)
        if (i % 3 == 0) {
            total_sum -= term;   // subtract when i is divisible by 3
        } else {
            total_sum += term;   // otherwise add
        }
    }

    // Output the final result
    cout << total_sum << endl;

    return 0;
}
