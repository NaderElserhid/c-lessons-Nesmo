#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> cost = {1, 100, 4, 1 , 50 ,90};
    int n = cost.size();

    vector<int> dp(n + 2 , 0);

    for (int i = n - 1; i >= 0; i--) {
        dp[i] = cost[i] + min(dp[i + 1], dp[i + 2]);
        cout << "  dp ["<<i<<"]= " << dp[i] << "\n";
    }

    int ans = min(dp[0], dp[1]);
    cout << "min cost is  = " << ans << "\n"; // 2
}
