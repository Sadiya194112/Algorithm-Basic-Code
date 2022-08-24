#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main(){
    int n,m;    cin>>n>>m;
    vector<vector<int> > edges;
    vector<vector<int> > ::iterator it;
    for(int i=0; i<m; i++){
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
    }
    int src;    cin>>src;
    vector<int> dist(n, INF);
    dist[src]=0;
    for(int iter=0; iter<n-1; iter++){
        for(auto e:edges){
            int u = e[0];
            int v = e[1];
            int w = e[2];
            dist[v] = min(dist[v], w+dist[u]);
        }
    }
    for(auto i:dist)    cout<<i<<" ";
    cout<<endl;
    return 0;
}


Input:
6 9
0 1 2
0 2 4
1 2 1
1 3 4
1 4 2
2 4 3
4 3 3
4 5 2
3 5 2
0

Output:  0 2 3 6 4 6
