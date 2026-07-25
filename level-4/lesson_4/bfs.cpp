#include <bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>>g;
vector<int>dist;
void bfs(int s)
{
    dist[s]=0;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        for(int it  :  g[v])
        {
            if(dist[it]!=-1)
            {
                continue;
            }
            dist[it]=dist[v]+1;
            q.push(it);
        }
    }
}
int main()
{
    int m;
    cin>>n>>m;
    g.resize(n);
    dist.assign(n,-1);
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bfs(0);
    for(int i=0;i<n;i++)
    {
        cout<<i<<" : "<<dist[i]<<endl;
    }
}
