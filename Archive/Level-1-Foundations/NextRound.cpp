#include <iostream>
using namespace std;

int main() {
    // 1. Ask the user to enter number of participants and rank k
    int n, k;
    cout << "Enter the number of participants (n): ";
    cin >> n;

    cout << "Enter the rank position (k): ";
    cin >> k;

    // 2. Read participants' scores
    int a[n], ans = 0;
    cout << "Enter the scores of the participants: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // 3. Count how many participants qualify
    for (int i = 0; i < n; i++) {
        if (a[i] >= a[k - 1] && a[i] > 0)
            ans++;
    }

    // 4. Output the result
    cout << "Number of qualified participants: " << ans;

    return 0;
}
