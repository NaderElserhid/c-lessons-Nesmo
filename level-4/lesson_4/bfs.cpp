#include <iostream>
#include <vector>
#include <queue>

using namespace std;


int n;
vector<vector<int>> g;
vector<int> dist;

void bfs(int s) {
    dist[s] = 0;
    queue<int> q;
    q.push(s);

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int to : g[v]) {

            if (dist[to] != -1) continue;

            dist[to] = dist[v] + 1;
            q.push(to);
        }
    }
}

int main() {
    int m;

     cin >> n >> m;

    g.resize(n);
    dist.assign(n, -1);


    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }


    bfs(0);


    for (int i = 0; i < n; ++i) {
        cout << "Distance to node " << i << ": " << dist[i] << "\n";
    }

    return 0;
}





