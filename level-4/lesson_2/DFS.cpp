#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int maxN = 200001;
bool vis[maxN];
int  p[maxN];
vector<int> adj[maxN];

void dfs(int u) {
    vis[u] = true;
    for (int v : adj[u]) {
        if (!vis[v]) {
            p[v] = u;
            dfs(v);
        }
    }
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

    dfs(1);

    if (!vis[n]) cout << "No";
    else {
        cout << "Yes\n";
        vector<int> pth;

        for (int i = n; i != 1; i = p[i])
            pth.push_back(i);
        reverse(pth.begin(), pth.end());
        cout << 1 << ' ';
        for (int i : pth) cout << i << ' ';
    }
}
