#include<bits/stdc++.h>
using namespace std;
const int N=10;
vector<int> g[N];
bool vis[N];

void dfs(int node){
    vis[node]=1;
    for(int i=0; i<g[node].size(); i++){
        int child = g[node][i];
        if(vis[child]==0){
            dfs(child);
        }
    }
}
int main(){
    int n,e;  cin>>n>>e;
    while(e--){
        int u,v;    cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(vis[i]==0){
            dfs(i), cnt++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}
