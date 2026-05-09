#include <bits/stdc++.h>
using namespace std;

const int maxN = 200'001;

vector<int> adj[maxN];
bool vis[maxN];

// تُرجع true إذا كان المكون دورة كاملة
bool dfs(int u) {
    vis[u] = 1;
    bool ret = (adj[u].size() == 2); // شرط الدورة

    for (int v : adj[u])
        if (!vis[v]) ret &= dfs(v); // AND على كل الرؤوس

    return ret;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (!vis[i]) ans += dfs(i);

    cout << ans << "\n";
}
