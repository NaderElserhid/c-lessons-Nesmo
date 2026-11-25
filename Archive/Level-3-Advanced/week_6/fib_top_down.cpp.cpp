#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n = 8;
    vector<long long> dp(n + 1);

    dp[0] = 0;  // الحالة الأساسية
    dp[1] = 1;  // الحالة الأساسية

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
        cout << "F[" << i<< "] = " << dp[i] << "\n"; // نبني من الأصغر للأكبر
    }

    cout << "F(" << n << ") = " << dp[n] << "\n";
}
