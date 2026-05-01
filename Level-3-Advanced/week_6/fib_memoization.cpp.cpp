#include <iostream>
#include <vector>
using namespace std;

vector<long long> dp;

long long fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    if (dp[n] != -1) return dp[n]; // تم حسابه مسبقاً ✔

    dp[n] = fib(n - 1) + fib(n - 2);
    cout << " dp [" <<n<<"] = "  <<dp[n] << " " << "\n";
    return dp[n];
}

int main() {
    int n = 50;
    dp.assign(n + 1, -1); // تهيئة بـ -1 (لم يُحسب بعد)
   long long  ans= fib(n);
    cout << "F(" << n << ") = " << ans << "\n";
    // النتيجة: F(50) = 12586269025
}
