#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long k2, k3, k5, k6;

    // Input the counts of digits 2, 3, 5, and 6
    if (!(cin >> k2 >> k3 >> k5 >> k6)) return 0;

    // Step 1: Maximize the number of 256s
    // We need one '2', one '5', and one '6' for each 256.
    long long count256 = min({k2, k5, k6});
    long long sum = count256 * 256;

    // Update the count of remaining '2' digits
    k2 -= count256;

    // Step 2: Maximize the number of 32s with remaining digits
    // We need one '3' and one '2' for each 32.
    long long count32 = min(k2, k3);
    sum += count32 * 32;

    // Output the final maximum sum
    cout << sum << endl;

    return 0;
}
