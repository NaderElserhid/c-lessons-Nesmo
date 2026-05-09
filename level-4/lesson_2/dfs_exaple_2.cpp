#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int maxN = 200001;

bool vis[maxN], clr[maxN];
bool contradiction = false;
vector<int> adj[maxN];

void dfs(int u) {
    vis[u] = true;
    for (int v : adj[u]) {
        if (vis[v]) {
            // الجار مُزار: تحقق من عدم التناقض
            if (clr[v] == clr[u]) contradiction = true;
        } else {
            // الجار غير مُزار: لوّنه باللون العكسي
            clr[v] = !clr[u];
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
    // نشغل DFS على كل مكون
    for (int i = 1; i <= n; i++)
        if (!vis[i]) dfs(i);

    if (contradiction) cout << "IMPOSSIBLE";
    else
        for (int i = 1; i <= n; i++)
            cout << 1 + clr[i] << ' ';
}
