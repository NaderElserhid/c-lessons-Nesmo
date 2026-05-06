#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cur = 0;

    for (int b = 29; b >= 0; b--) {
        int candidate = cur | (1 << b);
        int count = 0;
        for (int i = 0; i < n; i++) {
            if ((a[i] & candidate) == candidate) {
                count++;
            }
        }
        if (count >= 2) {
            cur = candidate;
        }
    }

    cout << cur << "\n";

    return 0;
}
