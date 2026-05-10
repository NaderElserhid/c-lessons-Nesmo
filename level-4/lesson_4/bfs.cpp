#include <bits/stdc++.h>

int n;
vector<int> g[n];

vector<int>dist(n,-1);
queue<int> q;



int main(){
    int s = 0;
    dist[s] = 0;
    q.push(s);

    while(!q.empty()){
        int v = q.front();
        q.pop();
        for (int to : g[v]){
            if(dist[to]!= -1) continue;
            dist[to] = dist[v]+1;
            q.push(to);
        }
    }

return 0;
}
