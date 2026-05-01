#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> cost = {1, 100, 1, 1};
    int n = cost.size();

    // نُضيف خلية إضافية لتجنب الخروج عن الحدود
    vector<int> dp(n + 2, 0);

    // نعمل من اليمين لليسار (من النهاية للبداية)
    for (int i = n - 1; i >= 0; i--) {
        dp[i] = cost[i] + min(dp[i + 1], dp[i + 2]);
        cout << " dp = " << dp[i] << "\n";
    }

    // يمكن البداية من 0 أو 1 — نختار الأقل
    int ans = min(dp[0], dp[1]);
    cout << " min cost = " << ans << "\n"; // 2
}
