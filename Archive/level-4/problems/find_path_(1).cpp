// NASMA-001 - هل تتصل المدينتان؟
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
vector<int> adj[MAXN];
bool visited[MAXN];

void dfs(int node) {
    visited[node] = true;
    for (int nei : adj[node])
        if (!visited[nei])
            dfs(nei);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int s, t;
    cin >> s >> t;

    dfs(s);

    cout << (visited[t] ? "YES" : "NO") << "\n";
    return 0;
}
