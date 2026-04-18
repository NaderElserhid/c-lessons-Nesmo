#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 1. Read array size and number of queries
    int n, q;
    cout << "Enter n (array size) and q (number of queries): ";
    cin >> n >> q;

    // 2. Prefix sum array (pref[0] = 0)
    vector<long long> pref(n + 1, 0);

    // Read array elements
    cout << "Enter " << n << " array elements: ";
    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        pref[i] = pref[i - 1] + x; // cumulative sum
    }

    // 3. Process queries
    cout << "Enter queries (a b):" << endl;
    while (q--) {
        int a, b;
        cin >> a >> b;

        // Sum from index a to b
        cout << pref[b] - pref[a - 1] << endl;
    }

    return 0;
}
