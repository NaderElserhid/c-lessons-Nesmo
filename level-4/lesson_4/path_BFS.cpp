#include <bits/stdc++.h>

using namespace std;

int main() {

    int n = 8;

    vector<vector<int>> g(n);
    vector<int> dist(n, -1), parent(n, -1);
    queue<int> q;


    g[0] = {1, 2};
    g[1] = {0, 3};
    g[2] = {0, 4, 5};
    g[3] = {1};
    g[4] = {2};
    g[5] = {2, 6, 7};
    g[6] = {5};
    g[7] = {5};


    int s = 0;
    dist[s] = 0;
    q.push(s);


    while(!q.empty()){
        int v = q.front();
        q.pop();

        for (int to : g[v]){
            if(dist[to] != -1) continue;

            dist[to] = dist[v] + 1;
            parent[to] = v;
            q.push(to);
        }
    }


    vector<int> path;
    int t = 7;


    if(dist[t] != -1) {
        for(int v = t; v != -1; v = parent[v]) {
            path.push_back(v);
        }
        reverse(path.begin(), path.end());


        cout << "number of steps is : " << dist[t] << " steps\n";
        cout << " path : ";
        for(int node : path) {
            cout << node << " ";
        }
        cout << "\n";
    } else {
        cout << "no path \n";
    }

    return 0;
}
