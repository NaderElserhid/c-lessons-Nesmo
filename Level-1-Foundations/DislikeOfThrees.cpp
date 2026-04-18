#include <iostream>
using namespace std;

int main() {
    // 1. Read the number of test cases from the user
    int t;
    if (!(cin >> t)) return 0; //

    // Loop through each test case
    while (t--) {
        // 2. Read the desired rank 'k' (the k-th liked number)
        int k;
        cout << "Enter the desired rank (k): ";
        cin >> k; //

        int current_num = 0;   // The integer currently being checked
        int count_liked = 0;   // Counter for how many "liked" numbers we have found


        // Continue searching until our liked counter reaches k
        while (count_liked < k) {
            current_num++;
            if (current_num % 3 == 0 || current_num % 10 == 3) {
                continue; //
            }

            // 5. If it passes both conditions, it is a "liked" number
            count_liked++;
        }
        cout << current_num << endl; //
    }

    return 0;
}
