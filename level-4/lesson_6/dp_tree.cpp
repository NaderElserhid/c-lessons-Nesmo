#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> g;
vector<int> dp0, dp1;

void dfs(int v, int p) {
    dp1[v] = 1;
    dp0[v] = 0;

    for(int to : g[v]) {
        if(to == p) continue;
        dfs(to, v);

        dp1[v] += dp0[to];
        dp0[v] += max(dp0[to], dp1[to]);
    }
}

int main() {
    cin >> n;

    g.resize(n);
    dp1.assign(n, 0);
    dp0.assign(n, 0);

    for(int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    if(n > 0) {
        dfs(0, -1);
        int ans = max(dp0[0], dp1[0]);
        cout << ans;
    }

    return 0;
}
