#include <bits/stdc++.h>
using namespace std;

const int maxN = 200005; // Slightly larger for 1-based indexing safety
queue<int> q;
vector<int> g[maxN];
vector<int> p(maxN, -1);   // Fixed: Use maxN for vertex properties
vector<int> dis(maxN, -1); // Fixed: Use maxN for vertex properties

void bfs(int u) {
    dis[u] = 0;  // Fixed: Assign to 'u', not hardcoded '0'
    q.push(u);   // Fixed: Must push the starting node into the queue!

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int to : g[v]) {
            if (dis[to] != -1) continue;

            dis[to] = dis[v] + 1; // Fixed: Use '=', not '+='
            p[to] = v;
            q.push(to);
        }
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    for (int i = 0; i < m; i++) {
        int v, u;
        cin >> v >> u;

        g[v].push_back(u);
        g[u].push_back(v);
    }

    int s = 1; // Assuming 1-based indexing, start at node 1

    bfs(s);

    // Check if the destination node 'n' was actually reached
    if (dis[n] == -1) {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    vector<int> path;

    // Reconstruct path from destination 'n' back to start
    for (int i = n; i != -1; i = p[i]) {
        path.push_back(i);
    }
    reverse(path.begin(), path.end());

    // Print path with spaces
    for (int i = 0; i < path.size(); i++) {
        cout << path[i] << (i == path.size() - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}
