#include <bits/stdc++.h>
using namespace std;

const int MAX = 10005;

int n, m;
vector<int> r[MAX];
bool vis[MAX];

void dfs(int u)
{
    vis[u] = true;

    for (int v : r[u])
    {
        if (!vis[v])
            dfs(v);
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        r[u].push_back(v);
    }

    cout << "Adjacency List:\n";

    for (int i = 0; i < n; i++)
    {
        cout << i << " : ";

        for (int x : r[i])
            cout << x << " ";

        cout << '\n';
    }

    // مثال: زيارة جميع العقد التي يمكن الوصول إليها من العقدة 0
    dfs(0);

    cout << "\nVisited Nodes:\n";

    for (int i = 0; i < n; i++)
    {
        if (vis[i])
            cout << i << " ";
    }

    cout << endl;

    return 0;
}
