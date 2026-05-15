#include <bits/stdc++.h>
using namespace std;


const int max_n = 10'000'000;
int spf[max_n + 1];


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

vector<int> getFactors(int x) {
    vector<int> ret;
    while (x != 1) {
        ret.push_back(spf[x]);  // أضف أصغر عامل أولي
        x = x / spf[x];          // اقسم وتابع
    }
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    sieve(n);


    for (int i = 2; i <= n; i++) {
        cout << "Smallest Prime Factor of " << i << " is: " << spf[i] << "\t";
    }

    return 0;
}
