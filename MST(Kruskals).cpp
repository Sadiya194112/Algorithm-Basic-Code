#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int parent[N], Size[N];

void make(int v){
    parent[v]=v;
    Size[v]=1;
}
int Find(int v){
    if(parent[v]==v)    return v;
    return parent[v]=Find(parent[v]);
}
void Union(int a, int b){
    a = Find(a);
    b = Find(b);
    if(a!=b){
        if(Size[a]<Size[b]){
            swap(a, b);
        }
        parent[b]=a;
        Size[a]+=Size[b];
    }
}
int main(){
    int n,m;    cin>>n>>m;
    vector<pair<int, pair<int, int>>> edges;
    for(int i=0; i<m; i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back({wt, {u,v}});
    }
    sort(edges.begin(), edges.end());
    cout<<endl;

    for(int i=1; i<=n; i++) make(i);
    for(auto &edge:edges){
        int wt = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;
        if(Find(u)==Find(v))    continue;
        Union(u,v);
        cout<<u<<" "<<v<<" "<<wt<<endl;
    }
    return 0;
}

/*
input:
4 6
2 3 1
2 1 2
0 1 2
1 3 3
0 3 4
0 2 4

Output:
2 3 1
0 1 2
2 1 2

*/
