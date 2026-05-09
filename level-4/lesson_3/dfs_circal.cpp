#include <bits/stdc++.h>
using namespace std;

const int maxN = 200'001;

bool vis[maxN];
vector<int> adj[maxN];

void dfs(int u) {
    vis[u] = true;
    for(int v : adj[u]) {
        if (!vis[v]) {
            dfs(v);
        }
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> sources;


    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            sources.push_back(i);
            dfs(i);
        }
    }


    cout << sources.size() - 1 << "\n";


    for(size_t i = 1; i < sources.size(); i++) {
        cout << sources[0] << ' ' << sources[i] << "\n";
    }


}
