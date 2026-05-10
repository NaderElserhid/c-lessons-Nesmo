#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> g;
vector<int> parent, depth, sub;

void dfs(int v, int p) {
    parent[v] = p;
    for(int to : g[v]) {
        if(to == p) continue;
        depth[to] = depth[v] + 1;
        dfs(to, v);
    }
}

void dfs_sub(int v, int p) {
    for(int to : g[v]) {
        if(to == p) continue;
        dfs_sub(to, v);
        sub[v] += sub[to];
    }
}

int main() {
    cin >> n;

    g.resize(n);
    parent.assign(n, -1);
    depth.assign(n, 0);
    sub.assign(n, 1);

    for(int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    if(n > 0) {
        dfs(0, -1);
        dfs_sub(0, -1);
    }

    for(int node : sub) {
        cout << node << " ";
    }

    return 0;
}
