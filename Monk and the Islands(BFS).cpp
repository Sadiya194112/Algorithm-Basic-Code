#include<bits/stdc++.h>
using namespace std;
const int N=1e4+5;

vector<int> g[N];
bool vis[N];
int dist[N];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src]=1;
    dist[src]=0;

    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(int i=0; i<g[curr].size(); i++){
            int child = g[curr][i];
            if(vis[child]==0){
                q.push(child);
                vis[child]=1;
                dist[child] = dist[curr]+1;
            }
        }
    }
}

int main(){
    int tc;     cin>>tc;
    while(tc--){
        int n,m;    cin>>n>>m;
        for(int i=1; i<=n; i++) g[i].clear(), vis[i]=0;
        for(int i=1; i<=m; i++){
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        bfs(1);
        cout<<dist[n]<<"\n";
    }
    return 0;
}
