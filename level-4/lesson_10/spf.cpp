#include <bits/stdc++.h>
using namespace std;

const int max_n = 10'000'000;
int spf[max_n + 1];

// Precompute the Smallest Prime Factor (SPF) for all numbers up to n
void sieve(int n) {
    for (int i = 1; i <= n; i++) {
        spf[i] = i;
    }

    for (int i = 2; i * i <= n; i++) {
        if (spf[i] == i) {
            for (long long j = i * i; j <= n; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

// Retrieve the prime factors using the precomputed SPF array
vector<int> getFactors(int x) {
    vector<int> ret;
    while (x != 1) {
        ret.push_back(spf[x]);  // Add smallest prime factor
        x = x / spf[x];         // Divide and continue
    }
    return ret;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    sieve(max_n);

    int n;
    if (cin >> n) {

        vector<int> ans = getFactors(n);


        cout << "Prime factors of " << n << " are: ";
        for(int factor : ans){
           cout << factor << " ";
        }
        cout << "\n";
    }

    return 0;
}
