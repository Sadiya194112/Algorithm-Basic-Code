#include<bits/stdc++.h>
using namespace std;
const int inf = 1e9;
int main(){
    int n,m;    cin>>n>>m;
    vector<int> dist(n+1, inf);
    vector<vector<pair<int, int> > > g(n+1);
    for(int i=0; i<m; i++){
        int u,v,w;  cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    int src;    cin>>src;
    dist[src]=0;
    set<pair<int,int> > s;
    s.insert({0,src});
    while(!s.empty()){
        auto x = *(s.begin());
        s.erase(x);
        for(auto it:g[x.second]){
            if(dist[it.first]>dist[it.second]+it.second){
                s.erase({dist[it.first], it.first});
                dist[it.first] = dist[x.second]+it.second;
                s.insert({dist[it.first], it.first});
            }
        }
    }
    for(int i=1; i<n; i++){
        if(dist[i]<inf){
            cout<<dist[i]<<" ";
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
