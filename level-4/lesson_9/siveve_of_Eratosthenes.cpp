#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 2000000;

vector<bool> is_prime(MAX_N + 1, true);

void sieve(int n) {
    is_prime[0] = is_prime[1] = false;

    for(int i = 2; i * i <= n; i++) {
        if(is_prime[i]) {
            for(int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    sieve(n);

    for(int i = 2; i <= n; i++) {
        if(is_prime[i]) {
            cout << "  " << i << " is prime\n";
        }
    }

    return 0;
}
