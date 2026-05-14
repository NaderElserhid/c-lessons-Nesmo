#include <bits/stdc++.h>
using namespace std;


const int max_n = 10'000'000;
int spf[max_n + 1];

// FIX 4: Changed 'int' to 'void' since we don't return anything
void sieve(int n) {
    // FIX (Optimization): Only initialize up to 'n'
    for (int i = 1; i <= n; i++) {
        spf[i] = i;
    }

    for (int i = 2; i * i <= n; i++) {
        // FIX 1: Use == for comparison, not =
        if (spf[i] == i) {
            for (long long j = i * i; j <= n; j += i) {
                // FIX 1: Use == for comparison
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

vector<int> getFactors(int x) {
    vector<int> ret;
    while (x != 1) {
        ret.push_back(spf[x]);  // أضف أصغر عامل أولي
        x = x / spf[x];          // اقسم وتابع
    }
    return ret;
}

int main() {
    int n;
    cin >> n;

    // FIX 2: You have to call the function to calculate the values!
    sieve(n);

    // FIX 3: Initialize i = 2 (since SPF of 0 and 1 isn't very useful)
    for (int i = 2; i <= n; i++) {
        cout << "Smallest Prime Factor of " << i << " is: " << spf[i] << "\t";
    }

    return 0;
}
