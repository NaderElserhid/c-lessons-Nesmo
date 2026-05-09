#include <iostream>
using namespace std;

int main() {

    int n;

    // Ask the user to enter the number of problems
    cout << "Please enter the number of problems: ";
    cin >> n;

    int ans = 0;

    // Loop through each problem
    for (int i = 0; i < n; i++) {

        int f1, f2, f3;

        // Ask the user to enter opinions for the current problem
        cout << "Problem " << i + 1 << ": "
             << "Please enter 1 if you agree and 0 if you disagree (three values): ";
        cin >> f1 >> f2 >> f3;

        // If at least two friends agree, count the problem
        if (f1 + f2 + f3 >= 2) {
            ans++;
        }
    }

    // Output the final result
    cout << "Number of problems the team will solve: " << ans << endl;

    return 0;
}
