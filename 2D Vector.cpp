#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int n,m,h,i,j;
void ac(){

    cin>>n>>m>>h;
    vector<vector<int>>a(n,vector<int>(m));

    for(i=0; i<n; i++){
        for(j=0; j<m; j++)  cin>>a[i][j];
    }
    for(i=0; i<n; i++){
        sort(a[i].begin(), a[i].end());
    }

    cout<<endl;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++)  cout<<a[i][j]<<' ';
        cout<<endl;
    }

}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}

