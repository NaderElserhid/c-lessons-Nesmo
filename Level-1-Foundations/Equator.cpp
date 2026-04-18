#include <iostream>
#include <vector>
using namespace std;

int main() {

    // 1. Ask the user to enter the number of days
    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    // Vector to store the number of problems solved each day
    vector<int> a(n);
    long long total_sum = 0;

    // 2. Read the problems solved each day and calculate the total sum
    cout << "Enter the number of problems solved each day:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
    }

    // 3. Calculate the target (at least half of the total problems)
    long long current_sum = 0;
    long long target = (total_sum + 1) / 2;   // +1 to handle odd total

    // 4. Find the first day when cumulative sum reaches at least half
    for (int i = 0; i < n; i++) {
        current_sum += a[i];

        if (current_sum >= target) {
            // Print the day number (1-based index)
            cout << "The answer is day: " << i + 1 << endl;
            break;
        }
    }

    return 0;
}
