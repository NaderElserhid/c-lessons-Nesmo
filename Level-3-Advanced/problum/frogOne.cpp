#include <iostream>
using namespace std;

int a[200000];
int dp[200000];

int f(int i) {

    if (i == 0) return 0;
    if (i == 1) return abs(a[1] - a[0]);


    if (dp[i] != -1) return dp[i];

    dp[i] = min(
        f(i - 1) + abs(a[i] - a[i - 1]),
        f(i - 2) + abs(a[i] - a[i - 2])
    );
    return dp[i];
}

int main() {
    for (int i = 0; i < 200000; i++) dp[i] = -1;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << f(n - 1) << "\n";
}
